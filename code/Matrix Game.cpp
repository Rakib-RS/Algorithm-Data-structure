#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,n,a[1000],m,s,x;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&m,&n);
        for(i=1;i<=m;i++){
                s=0;
            for(j=1;j<=n;j++){
                scanf("%lld",&x);
                s+=x;
            }
            a[i]=s;
        }
        x=0;
        for(i=1;i<=m;i++)
            x=x^a[i];
        if(x)
            printf("Case %lld: Alice\n",tc++);
        else printf("Case %lld: Bob\n",tc++);
    }
    return 0;
}
