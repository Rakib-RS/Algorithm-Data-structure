#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int a,b,t,i,s,r;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){

        scanf("%lld%lld",&a,&b);
        if(a==1||b==1) s=a*b;
        else if(a==2&&b==2)s=a*b;
        else if(a==2||b==2){ s=0;
            r=max(a,b);if(r%2!=0)s=1;
                else{
                    r=r/2;
                    if(r%2!=0) s=2;
                }
                s+=(a*b)/2;
        }
        else {
            s=a*b;
            if(s%2!=0)s++;
            s=s/2;
        }
        printf("Case %lld: %lld\n",i,s);
    }

    return 0;
}
