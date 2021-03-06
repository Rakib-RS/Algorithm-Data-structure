#include <bits/stdc++.h>
using namespace std;

struct Point
{
	int x, y;
};

int orientation(Point p, Point q, Point r)
{
	int val = (q.y - p.y) * (r.x - q.x) -
			(q.x - p.x) * (r.y - q.y);

	if (val == 0) return 0;
	return (val > 0)? 1: 2;
}

void convexHull(Point points[], int n)
{
	vector<Point> hull;
	int l = 0;
	for (int i = 1; i < n; i++)
		if (points[i].y > points[l].y)
			l = i;

	int p = l, q,j=0;
	do
	{
		hull.push_back(points[p]);
		q = (p+1)%n;
		for (int i = 0; i < n; i++)
		{
		if (orientation(points[p], points[i], points[q]) == 2)
			q = i;
		}
		p = q;
		j++;

	} while (j!= n);
	for (int i = 0; i < hull.size(); i++)
		cout << "(" << hull[i].x << ", "
			<< hull[i].y << ")\n";
}
int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--){
            cin>>n;
        Point points[n+1];
        for(int i=0;i<n;i++){
            cin>>points[i].x>>points[i].y;
        }
        convexHull(points, n);
    }
	return 0;
}


