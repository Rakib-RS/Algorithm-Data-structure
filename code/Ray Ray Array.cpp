#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,p,x,y,i,j,q,a[100005],t,tc=1;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&q);
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }
        while(q--){
            scanf("%lld%lld%lld",&p,&x,&y);
            for(i=1;i<=n;i++){
                if(p==1){
                    if(a[i]<=x)
                        a[i]-=y;
                }
                else{
                    if(a[i]>=x)
                        a[i]+=y;
                }
            }
        }
        for(i=1;i<n;i++)
            printf("%lld ",a[i]);
        printf("%lld\n",a[n]);
    }



    return 0;
}
