#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 100000007
ll dp[55][1005],n,make;
map<ll,ll>nc;
ll coin[55];
ll call(ll i,ll amount){
    if(i>=n){
        if(amount==make)return 1;
        else return 0;
    }
    if(dp[i][amount]!=0)return dp[i][amount];
    ll r1=0,r2=0;
    if(nc[coin[i]]>=1&&amount+coin[i]<=make){
        r1=call(i,amount+coin[i]);
       nc[coin[i]]--;
    }
    r2=call(i+1,amount);
    return dp[i][amount]=(r1+r2)%mod;
}
int main(){
    ll t,tc=1,i,j,k;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&make);
        memset(dp,0,sizeof(dp));
        nc.clear();
        for(i=0;i<n;i++)
            scanf("%lld",&coin[i]);
        for(i=0;i<n;i++){
            scanf("%lld",&k);
            j=coin[i];
            nc[j]=k;
        }
        k=call(0,0);
        for(i=0;i<n;i++){
            for(j=0;j<=20;j++)
            cout<<dp[i][j]<<endl;
        }
        printf("Case %lld: %lld\n",tc++,call(0,0));
    }
    return 0;
}
