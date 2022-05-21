#include<iostream>
using namespace std;
int main(){
    int m,n,i,j,k;
    while(cin>>m>>n){
        int price[n+1];
        int favour[n+1];
        for(i = 0 ;i<n;i++){
            scanf("%d%d",&price[i],&favour[i]);
        }
        int discount = m;
        if(m>1800) discount = m+200;
        int dp[discount+1];
        for(i= 0 ;i<=discount;i++) dp[i] = 0;
        for(i= 0;i<n;i++){
            for(j = discount;j>=price[i];j--){
                if(dp[j-price[i]]>0 || price[i] == j){
                    dp[j] = max(dp[j-price[i]]+favour[i],dp[j]);
                }
            }
        }
        int ans = 0;
        if(m>1800 && m<=2000){
            for(i = 0;i<=m;i++) ans = max(ans,dp[i]);
            for(i = 2001;i<=discount;i++) ans = max(ans,dp[i]);
        }
        else{
            for(i = 0;i<=discount;i++) ans = max(ans,dp[i]);
        }
        printf("%d\n",ans);

    }
    return 0;

}