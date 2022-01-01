#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
int N, cnt[101], K, O;
int main()
{
	scanf("%d%d", &N, &K);
	for (int i = 0, x; i < N; i++)
	{
		scanf("%d", &x);
		if (x == K)
			O++;
		else if (x < K)
			cnt[x] = 1;
	}
	for (int i = 0; i < K; i++){
            cout<<cnt[i]<<endl;
		if (!cnt[i]){
			O++;
			cout<<"cn= "<<cnt[i]<<endl;
		}
	}
	printf("%d\n", O);
	return 0;
}
