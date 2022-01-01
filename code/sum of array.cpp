#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,q,i,j,a[100050],b[100050],p,v,s,t,tc=1;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&q);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        printf("Case %lld:\n",tc++);
        while(q--){
            scanf("%lld",&j);
            if(j==1){
                    s=0;
                for(i=0;i<n;i++){
                        s+=a[i];
                        b[i]=s;
                }
                s=0;
                for(i=0;i<n-1;i++){
                    s+=(a[i]*(n-i-1))-(b[n-1]-b[i]);
                }
                printf("%lld\n",s);
            }
            else {
                scanf("%lld%lld",&p,&v);
                a[p]=v;
            }
        }
    }
    return 0;
}
