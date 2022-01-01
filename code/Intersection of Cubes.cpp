#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,k,x1,y1,z1,x2,y2,z2,a,b,c,p,q,r,n,v;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);j=n;
        while(n--){
            scanf("%lld%lld%lld%lld%lld%lld",&x1,&y1,&z1,&x2,&y2,&z2);
            if(j-1==n){
                a=x1;b=y1;c=z1;p=x2;q=y2;r=z2;
            }
            a=max(a,x1);b=max(b,y1);c=max(c,z1);
            p=min(p,x2);q=min(q,y2);r=min(r,z2);
        }
        v=(p-a)*(q-b)*(r-c);
        if(v<0)v=0;
        printf("Case %lld: %lld\n",tc,v);
        tc++;
    }
    return 0;
}
