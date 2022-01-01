#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,r,c,tc=1,v,a[230][230],k,s,l,mx;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);k=n;
        memset(a,0,sizeof(a));
        for(i=1;i<=2*n-1;i++){
            if(i<=n)
            for(j=1;j<=i;j++){
                scanf("%d",&a[i][j]);
            }
            else {
                    for(j=1;j<=k-1;j++)
                        scanf("%d",&a[i][j]);
                    k--;
            }
        }
        k=n;
        for(i=2;i<=2*n-1;i++){
            if(i<=n){
                for(j=1;j<=i;j++){
                    mx= max(a[i-1][j-1],a[i-1][j]);
                    a[i][j]+=mx;
                }
            }
            else {
                for(j=1;j<=k-1;j++){
                    mx= max(a[i-1][j],a[i-1][j+1]);
                    a[i][j]+=mx;
                }
                k--;
            }
        }
        printf("Case %d: %d\n",tc++,a[2*n-1][1]);
    }
    return 0;
}
