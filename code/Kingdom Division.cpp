#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,i,j;
    double a,b,c,d,area,t1,t2,p,q;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf",&a,&b,&c);
        j=1;
        if(j>0)
        p=(a*c*1.0)/b;
        else j=-1;
        if(b-p>0)
            q=((p+c)*(a+p)*1.0)/(b-p);
        else j=-1;
        if(j==1)
            printf("Case %d: %.8lf\n",tc++,p+q);
        else
            printf("Case %d: -1\n",tc++);

    }
    return 0;
}
