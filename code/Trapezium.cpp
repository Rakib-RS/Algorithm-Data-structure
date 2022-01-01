#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1;
    double s,a,b,c,d,h,area,m;
    scanf("%lld",&t);
    while(t--){
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        m=max(a,c)-min(a,c);
        s=(b+d+m)*.5;
        s=s*(s-b)*1.0*(s-d)*(s-m);
        s=sqrt(s);
        h=(2.0*s)/m;
        area=.5*h*(a+c);
        printf("Case %lld: %.8lf\n",tc,area);
        tc++;
    }

    return 0;
}
