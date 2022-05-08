#include<bits/stdc++.h>
using namespace std;
bool EqualSum(int nums[],int n){
    int i,j,k,sum = 0;
    for(i =0 ;i<n;i++){
        sum += nums[i];
    }
    if(sum%2==1) return false;
    bool dp[n+1][sum/2+1];
    dp[0][0] = true;
    for(i =0 ;i<=n;i++){
        for(j = 0;j<=sum/2;j++){
            if(j== 0) dp[i][j] = true;
            else if( i ==0 ) dp[i][j] = false;
            else if(nums[i-1]<=j){
                dp[i][j] = dp[i-1][j- nums[i-1]] || dp[i-1][j];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum/2];

}
int main(){
    int nums [] ={2};
    int n = 1;
    bool test = EqualSum(nums,n);
    cout<<test<<endl;

    return 0;
}