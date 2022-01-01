#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,o1,o2,a1,a2,b1,b2,i,j;
    double a,b,c,r,d,x,m;
    cin>>t;
    i=1;
    while(t--){
            scanf("%lld%lld%lld%lld%lld%lld",&o1,&o2,&a1,&a2,&b1,&b2);
        a=(o1-a1*1.0)*(o1-a1*1.0)+(o2-a2*1.0)*(o2-a2*1.0);
        b=(o1-b1*1.0)*(o1-b1*1.0)+(o2-b2*1.0)*(o2-b2*1.0);
        c=(b1-a1*1.0)*(b1-a1*1.0)+(b2-a2*1.0)*(b2-a2*1.0);
        m=(a+b-c)/(2.0*a);
        x=acos(m*1.0);
        a=sqrt(a*1.0);
        d=a*x;
        printf("Case %lld: %.8lf\n",i,d);
        i++;
    }



    return 0;
}
