#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    while(cin>>n && n){
        int weight[n+5],load[n+5];
        for(i = 1;i<=n;i++){
            scanf("%d%d",&weight[i],&load[i]);
        }
        int dp[6005];
        for(i = 0;i<=6001;i++) dp[i] = 0;
        for(i =n;i>=1;i--){
            for(j = load[i];j>=0;j--){
                if(dp[j]){
                    dp[j+weight[i]] = max(dp[j+weight[i]],//The original best stack.
                                            dp[j]+1);//box is stack
                }
            }
            if(dp[weight[i]]==0) dp[weight[i]] = 1;
        }
        int ans = 0;
         for(i = 0;i<=6001;i++) ans = max(ans,dp[i]);
         printf("%d\n",ans);
    }
    return 0;
}