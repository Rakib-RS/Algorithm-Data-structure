#include<bits/stdc++.h>
using namespace std;
int main(){
    double r1,r2,r3,a,b,c,a1,a2,a3,s1,s,s3,atr,total;
    long long int t,tc=1;
    scanf("%lld",&t);
    while(t--){

        scanf("%lf%lf%lf",&r1,&r2,&r3);
        a=r1+r2;b=r1+r3;c=r2+r3;
        s=(a+b+c)/2.0;
        atr=s*(s-a)*(s-b)*(s-c);
        atr=sqrt(atr);
        a1=acos(((a*a*1.0)+(b*b*1.0)-(c*c*1.0))/(2.0*a*b));
        a2=acos(((a*a*1.0)+(c*c*1.0)-(b*b*1.0))/(2.0*a*c));
        a3=(2*acos(0.0))-a1-a2;
        s1=.5*r1*r1*a1+.5*r2*r2*a2+.5*r3*r3*a3;
        total=atr-s1;
        printf("Case %lld: %.10lf\n",tc,total);
        tc++;

    }

    return 0;
}
