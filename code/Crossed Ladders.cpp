#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,k;
    double x,y,c,w,d,l,h,i,j,mid,d1,d2,d3;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf",&x,&y,&c);
        h=min(x,y);
        l=0;k=0;
        d=100;d1=1.0/c;
        while(h-l>=.000000001){
                mid=(l+h)/2.0;
                w=mid;
                d2=sqrt(x*x-w*w);
                d3=sqrt(y*y-w*w);
                d2=(1.0/d2)+(1.0)/d3;
                if(d1>d2){
                    l=mid;
                }
                else{
                    h=mid;
                }
                k++;
        }
        printf("Case %d: %.8lf\n",tc,w);
        tc++;
    }
    return 0;
}
