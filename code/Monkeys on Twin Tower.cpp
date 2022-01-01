#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,i,j,f[1005],s[1005],r[1005],l[1005],n,tr[1005],tl[1005],a,b,k,s1,ma;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&f[i]);
        for(i=0;i<n;i++)
            scanf("%d",&s[i]);
        for(i=0;i<n-1;i++)
            scanf("%d",&l[i]);
        for(i=0;i<n-1;i++)
            scanf("%d",&r[i]);
        tl[n-1]=f[n-1];tr[n-1]=s[n-1];
        for(i=n-2;i>=0;i--){
            a=f[i]+tl[i+1];
            b=l[i]+tr[i+1]+f[i];
            tl[i]=min(a,b);
            a=s[i]+tr[i+1];
            b=tl[i+1]+r[i]+s[i];
            tr[i]=min(a,b);
        }
        tl[0]=min(tl[0],tr[0]);
        printf("Case %d: %d\n",tc++,tl[0]);
    }
    return 0;
}
