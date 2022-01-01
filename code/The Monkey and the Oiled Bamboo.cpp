#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,i,j,ma=0,n,a[200000],k;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);ma=0;a[0]=0;k=1;
        for(i=1;i<=n;i++){
                scanf("%d",&a[i]);
        }
        for(i=n;i>0;i--){
            if(i==n)
                ma=a[i]-a[i-1];
            j=a[i]-a[i-1];
            if(j==ma&&k==0)
                ma++;
            ma=max(ma,j);
            k=0;
        }
        printf("Case %d: %d\n",tc,ma);
        tc++;
    }
    return 0;
}
