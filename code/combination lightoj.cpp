#include<bits/stdc++.h>
using namespace std;
long long int fac[1000006];
long long int power(long long int n,long long int b,long long int m){
    if(b==0)
        return 1;
   long long int p=power(n,b/2,m)%m;
    p=(p*p)%m;
    if(b%2!=0)
        p=(n*p)%m;
    return p;
}
long long int modinverse(long long int n,long long int p){
    return power(n,p-2,p);
}
long long int ncr(long long int n,long long int r,long long int p){
    return (fac[n]*modinverse(fac[r],p)%p *modinverse(fac[n-r],p)%p)%p;
}
int main(){
    long long int t,tc=1,i,j,n,r,c,p=1000003;
    fac[0]=1;
    for(i=1;i<=1000001;i++)
        fac[i]=fac[i-1]*i%p;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&r);
        c=ncr(n,r,p);
        printf("Case %lld: %lld\n",tc++,c);
    }

    return 0;
}
