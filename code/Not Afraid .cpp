#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a2,b2,a,b,c,i,j,l,s,k1,k2,a1[20000],b1[20000],t,tc=1,d;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld%lld",&a2,&b2,&l);d=1;
        s=sqrt(a);k1=0;
        if(l%a2!=0||l%b2!=0)d=0;
        else if(a2*b2<=l){
            c=l/(a2*b2);
        }
        else{ a=l/a2;b=l/b2;
                c=1;a2=max(a2,b2);
        for(i=2;i<=s;i++){
            if(a%i==0&&b%i==0){
                c=i;
                break;
            }
        }
            if(c>1)c=a2*c;
        }
        if(d)
        printf("Case %lld: %lld\n",tc,c);
        else printf("Case %lld: impossible\n",tc);
            tc++;
    }
    return 0;
}
