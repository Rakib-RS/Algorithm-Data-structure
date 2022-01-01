#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1;
    double a,b,c,r,a1,a2,d;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf%lf",&a,&b,&c,&r);
        d=sqrt((r*1.0)/(r+1))*a;
        printf("Case %d: %.8lf\n",tc,d);
        tc++;
    }
    return 0;
}
