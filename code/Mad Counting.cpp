#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,n,i,j,s;
    map<long long int ,long long int>mp;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);s=0;
        mp.clear();
        while(n--){
            scanf("%lld",&j);
            if(mp[j]==0){
                s+=(j+1);
                mp[j]=j;
            }
            else mp[j]--;
        }
        printf("Case %lld: %lld\n",tc++,s);
    }
    return 0;
}
