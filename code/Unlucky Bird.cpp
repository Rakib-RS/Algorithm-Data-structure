#include<bits/stdc++.h>
using namespace std;
int main(){

    double v1,v2,v3,a1,a2,d,d1,d2,s,s1,s2,t1,t2;
    int ta,i;
    scanf("%d",&ta);
    i=1;
    while(ta--){

        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        s1=(v1*v1)/(2.0*a1);
        s2=(v2*v2)/(2.0*a2);
        d=s1+s2;
        t1=(v1*1.0)/a1;
        d1=v3*t1;
        s=d1;
        t2=(v2*1.0)/a2;
        d2=v3*t2;
        s=max(d1,d2);
        printf("Case %d: %.10lf %.10lf\n",i,d,s);
        i++;
    }




    return 0;
}
