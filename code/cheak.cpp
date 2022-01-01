#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,m,i,j,o,a,b,c,mm,r,ans;
        scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld%lld%lld",&n,&k,&m);
        if(n>=1) {a=2;c=2;}
            if(n>=2) {b=3;c=3;}
        for(j=3;j<=n;j++){
            c=a+b;
            a=b;
            b=c;
        }
        ans = 1;
		k %= m;

		while (c) {
			if (c & 1)
				ans = (ans * k) % m;
			k = (k * k) % m;
			c >>= 1;

		}
        printf("Case %lld: %lld\n",i,ans);

    }
    return 0;
}


