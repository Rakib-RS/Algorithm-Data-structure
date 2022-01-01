#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,i,j,a,b;
    double r,x,l,w,teta,s,p,d=100,low,mid,high,k=100;
    scanf("%d",&t);
    while(t--){
        scanf("%d : %d",&a,&b);d=100;low=0;high=400;k=100;
        while(high-low>=.000000001){
            x=(high+low)/2.0;
            r=(1/4.0)*x*x*(a*a+b*b);
            teta=(2.0*r-b*b*x*x)/(2.0*r);
            teta=acos(teta*1.0);
            s=sqrt(r)*teta;
            p=2.0*(a*x+s);
            if(p>400)
                high=x;
            else
                low=x;

        }

        l=a*x;
        w=b*x;
        printf("Case %d: %.8lf %.8lf\n",tc,l,w);
        tc++;
    }

    return 0;
}
