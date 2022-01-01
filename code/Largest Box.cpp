#include<bits/stdc++.h>
using namespace std;
double volume(double w,double l);
int main(){
    int t,tc=1,i,j;
    double w,l,x,v;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf",&w,&l);
          x=((w+l) - sqrt(w*w -w*l + l*l))/6.0;
          v=(w-2*x)*(l-2*x)*x;
          printf("Case %d: %.8lf\n",tc++,v);
    }
    return 0;
}
