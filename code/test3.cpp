#include<bits/stdc++.h>
using namespace std;
double fac[2000000];
int main()
{   long long int i,j,k,n,b,d,t;
    fac[0]=0;
    for(i=1;i<=1000000;i++){
        fac[i]=log10((i))+fac[i-1];
    }
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%lld%lld",&n,&b);
        d=(fac[n]/log10(b))+1;
        printf("Case %lld: %lld\n",i,d);
    }
    return 0;
}
