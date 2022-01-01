#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,t,tc=1,n;
    double sum,p,a[200];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%lf",&a[i]);
        }
        for(i=n-1;i>0;i--){
                p=n-i;
                if(p>6)p=6;
                sum=0;
            for(j=i+1;j<=i+p;j++){
                sum+=a[j];
            }
            a[i]+=(sum/(p*1.0));
        }
        printf("Case %d: %.8lf\n",tc++,a[1]);
    }
    return 0;
}
