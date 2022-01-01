#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[200000],i,j,t,sum,n,r=10000007,b;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        sum=0;
        for(j=0;j<6;j++){
            scanf("%lld",&b);
            a[j]=b%r;
        }
        scanf("%lld",&n);
        for(j=6;j<=n;j++){
            a[j]=a[j-1]+a[j-2]+a[j-3]+a[j-4]+a[j-5]+a[j-6];
            a[j]%=r;
        }
        printf("Case %lld: %lld\n", i, a[n]);
    }

    return 0;
}
