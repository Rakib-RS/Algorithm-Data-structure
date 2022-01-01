#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[1000],i,j,x,t,tc=1,k;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&k);
        for(i=1;i<=2*k;i++)
            scanf("%lld",&a[i]);
        x=0;
        for(i=2*k;i>1;i=i-2){
            j=a[i]-a[i-1]-1;
            x=x^j;
        }
        if(x)
            printf("Case %lld: Alice\n",tc++);
        else printf("Case %lld: Bob\n",tc++);
    }
    return 0;
}
