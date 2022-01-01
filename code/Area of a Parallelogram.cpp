#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a1,a2,b1,b2,c1,c2,d1,d2,ax1,ay1,ax2,ay2,s,area,t,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%lld%lld%lld%lld%lld%lld",&a1,&a2,&b1,&b2,&c1,&c2);
        d1=c1-b1+a1;
        d2=c2-b2+a2;
        ax1=b1-a1;ay1=b2-a2;
        ax2=d1-a1;ay2=d2-a2;
        area=ax1*ay2-ax2*ay1;
        if(area<0)area=-area;
        printf("Case %lld: %lld %lld %lld\n",i,d1,d2,area);
    }

    return 0;
}
