#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>

struct point
{
    double x, y;
    point(double x, double y) : x(x), y(y) { }
    point() {};
};

double dist(const point& a, const point& b)
{
    return std::sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}

bool rightTurn(const point& a, const point& b, const point& c)
{
    return (a.x-b.x)*(c.y-b.y)-(a.y-b.y)*(c.x-b.x) >= 0;
}

template <typename T> double calcHullPartLength(T begin, T end) // Graham scan
{   // s is the stack containing our tentative hull
    std::vector<point> s(std::distance(begin, end));
    int t; // Top of the stack
    for(t = 0; t < 2; t++)
        s[t] = *begin++;
    while(begin < end)
    {
        while(t >= 2 && !rightTurn(s[t-2], s[t-1], *begin))
            t--; // Convexify by popping the vertex that contributes to a left turn
        s[t++] = *begin++;
    }
    double ans = 0;
    for(int i = 1; i < t; i++)
        ans += dist(s[i], s[i-1]);
    return ans;
}

int main()
{
    int N, L;
    scanf("%d %d", &N, &L);
    std::vector<point> p;
    p.reserve(N);
    while(N--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        p.push_back(point(x, y));
    }
    std::sort(p.begin(), p.end(), [] (const point& a, const point& b)
                                  { return (a.x == b.x) ? a.y < b.y : a.x < b.x; });
    double ans = calcHullPartLength(p.begin(), p.end());
    ans += calcHullPartLength(p.rbegin(), p.rend());
    printf("%.0lf", ans+4*acos(0.0)*L); // If we round to the nearest foot, it's within 6 inches
    return 0;                           // (and hence within 8 inches)
}
