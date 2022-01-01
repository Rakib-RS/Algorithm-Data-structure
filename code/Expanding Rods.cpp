#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1;
    double l,l1,n,c,low,high,a,h,mid,r,pi=2.0*acos(0.0);
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf",&l,&n,&c);h=0;
        l1=(1+n*c*1.0)*l;
        if(l!=l1){
            low=0;high=pi;
            r=(2.0*l1)/l;
            while(high-low>=.0000000001){
                mid=(low+high)/2.0;
                a=(mid*1.0)/sin(mid/2.0);
                if(a==r) break;
                if(a>r)
                    high=mid;
                else low=mid;
            }
            r=l1/mid;
            h=r-r*cos(mid/2.0);
        }
        printf("Case %d: %.9lf\n",tc,h);
        tc++;

    }
    return 0;
}
