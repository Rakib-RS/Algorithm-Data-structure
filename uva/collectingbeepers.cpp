// http://uva.onlinejudge.org/external/104/10496.html
// runtime : 0.004
// TSP (Traveling Sales-man problem )
 
// @BEGIN_OF_SOURCE_CODE
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;
 
struct Beepers {
    int x;
    int y;
} a [10 + 3];
 
int beepers;
bool vis [10 + 3] [1024 + 5]; // is_visited
int val [10 + 3] [1024 + 5]; // cost
 
int dp (int at, int mask)
{
    if ( mask ==  (1 << beepers) - 1 ) {
        vis [at] [mask] = true;
        return val [at] [mask] = abs (a [at].x - a [0].x) + abs (a [at].y - a [0].y);
    }
 
    if ( vis [at] [mask] )
        return val [at] [mask];
 
    int ans = 100000; // inf
 
    for ( int i = 0; i < beepers; i++ ) {
        if ( (mask & (1 << i)) == 0 ) {
            int cost = dp (i, mask | (1 << i)) + abs (a [at].x - a [i].x) + abs (a [at].y - a [i].y);
            if ( ans > cost ) ans = cost;
        }
    }
 
    vis [at] [mask] = true;
    return val [at] [mask] = ans;
}
 
int main ()
{
    int testCase;
    freopen("input.txt","r",stdin);
    scanf ("%d", &testCase);
 
    while ( testCase-- ) {
        int Row, Col;
        scanf ("%d %d", &Row, &Col);
 
        scanf ("%d %d", &a [0].x, &a [0].y);
 
        scanf ("%d", &beepers);
        beepers++; // with source
 
        for ( int i = 1; i < beepers; i++ )
            scanf ("%d %d", &a [i].x, &a [i].y);
 
        memset (vis, false, sizeof (vis));
 
        printf ("The shortest path has length %d\n", dp (0, 1));
    }
 
    return 0;
}
 
// @END_OF_SOURCE_CODE