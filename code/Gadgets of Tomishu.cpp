#include<bits/stdc++.h>
using namespace std;
long long int mod(long long int a,long long int b,long long int c)
{
    if(b==0) return 1;

    if(b%2==0)
    {
        int x=mod(a,b/2,c);
        return (x*x)%c;
    }
    else return (a%c * mod(a,b-1,c))%c;
}
int main()
{
    long long int t,n,k,m,i,j,o,a,b,c,mm,r;
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
        mm=mod(k,c,m);
        printf("Case %lld: %lld\n",i,mm);

    }
    return 0;
}

