#include<bits/stdc++.h>
using namespace std;

int n, f[200010];

void Dfs(int x)
{
	if (x!=1) Dfs(f[x]);
	printf("%d ", x);
}

int main()
{
	scanf("%d", &n);
	for (int i=2; i<=n; i++) scanf("%d", &f[i]);
	Dfs(n); /*puts("");*/
	cout<<" "<<endl;
}
