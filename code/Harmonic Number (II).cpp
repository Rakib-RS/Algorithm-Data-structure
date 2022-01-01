#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,tc=1,i,n,r,j,f,l,d,sum=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        sum=0;
        for(i=1;i<=sqrt(n);i++){
            sum+=n/i;
            l=n/i;
            if(i>1){
                d=f-l;
                sum+=(d*(i-1));
            }
            f=n/i;
        }
        sum+=((f-i+1)*(i-1));
        printf("Case %lld: %lld\n",tc++,sum);
    }
    return 0;
}


