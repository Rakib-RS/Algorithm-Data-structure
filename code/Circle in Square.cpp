#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    double a,s,d,r;
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%lf",&r);
        a=2*acos(0.0)*r*r;
        s=4*r*r;
        d=s-a;
        printf("Case %d: %.2lf\n",i,d);
    }

    return 0;
}
