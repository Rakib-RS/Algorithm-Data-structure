#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
#define mems(x, y) memset(x, y, sizeof x)
#define pii pair < int, int >
#define ll long long
int n;
int grid[202][202], dp[202][202];
int banana(int r, int c)
{
    int ret = INT_MIN;
    if(r >= 0 && r < n - 1 && c >=0 && c < n) {
        if(dp[r][c] != -1)      return dp[r][c];
        ret = max(ret, banana(r + 1, c) + grid[r][c]);
        ret = max(ret, banana(r + 1, c + 1) + grid[r][c]);
        dp[r][c] = ret;
        return dp[r][c];
    }
    else if(r >= n - 1 && r < 2 * n - 1 && c >= 0 && c < n) {
        if(dp[r][c] != -1)      return dp[r][c];
        ret = max(ret, banana(r + 1, c) + grid[r][c]);
        ret = max(ret, banana(r + 1, c - 1) + grid[r][c]);
        dp[r][c] = ret;
        return dp[r][c];
    }
    else
        return 0;
}

int main()
{
    fast;
    int t, cases = 1;
    cin >> t;
    while(t--) {
        scanf("%d", &n);
        mems(grid, 0);
        mems(dp, -1);
        int i, j;
        for( i = 0; i < n; i++) {
            for( j = 0; j <= i; j++) {
                scanf("%d", &grid[i][j]);
            }
        }
        for( i = n; i < 2 * n - 1; i++) {
            for( j = 0; j < n + n - 1 - i; j++) {
                scanf("%d", &grid[i][j]);
            }
        }
        printf("Case %d: %d\n", cases, banana(0, 0));
        cases++;
    }
    return 0;
}
