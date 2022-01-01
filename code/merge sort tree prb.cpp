#include <bits/stdc++.h>
using namespace std;

int n,q, ar[30005];
vector<int> v[100005];

void build(int pos ,int l ,int r )
{
	if(r == l )
	{
		v[pos].push_back(ar[l]);
		return ;
	}
	int mid = (l+r)/2;
	build(2 * pos, l, mid);
	build(2*pos+1, mid+1, r);
	merge(v[2 * pos].begin(), v[2 * pos].end(), v[2 * pos + 1].begin(), v[2 * pos + 1].end(), back_inserter(v[pos]));
}

int query(int x,int y,int k,int pos ,int l ,int r )
{

	if(x > r || l > y)
		return 0;
	if(x <= l && r <= y)
	{
		return v[pos].size() - (upper_bound(v[pos].begin(), v[pos].end(), k) - v[pos].begin());
	}
	int mid = (l+r)/2;

	return query(x, y, k, 2 * pos, l, mid) +
		   query(x, y, k, 2*pos+1, mid+1, r) ;
}


int main()
{
    freopen("input.txt","r",stdin);
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &ar[i]);

	build(1,0,n-1);
	scanf("%d", &q);

	int prev = 0;
	while(q--)
	{
		int a,b,c;
		scanf("%d%d%d", &a, &b, &c);
		int i = a^prev;
		int j = b^prev;
		int k = c^prev;

		prev = query(i-1,j-1,k,1,0,n-1);
		printf("%d\n", prev);
	}
	return 0;
}

