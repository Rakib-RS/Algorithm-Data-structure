#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,i,j;
    double r1,r2,h,p,h1,v1,v2,rp,pi;
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
         pi=2*acos(0.0);
        rp=r1-((h-p)*1.0*(r1-r2)*1.0)/h;
        h1=(h*r1*1.0)/(r1-r2);
        v1=rp*rp*(h1-(h-p))*1.0;
        v2=r2*r2*(h1-h)*1.0;
        v1=v1-v2;
        v1=(pi*v1)/3;
        printf("Case %lld: %.8lf\n",i,v1);
    }
    return 0;
}
