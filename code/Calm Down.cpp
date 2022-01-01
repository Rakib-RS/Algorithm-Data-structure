#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1;
    double R,r,n,d,pi;
    scanf("%lld",&t);
    while(t--){
        scanf("%lf%lf",&R,&n);
        pi=2*acos(0.0);
        d=sin(pi/n);
        r=(R*d*1.0)/(d+1);
        printf("Case %lld: %.10lf\n",tc,r);
        tc++;
    }
    return 0;
}
