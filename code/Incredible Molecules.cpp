#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,i,j,x1,x2,y1,y2,r1,r2;
    double teta,a1,area,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
        d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        cout<<d<<endl;
        teta=2.0*acos(d/(2.0*r1));
        area=1.0*r1*r1*(teta-sin(teta));
        printf("Case %d: %.8lf\n",tc++,area);
    }
    return 0;
}
