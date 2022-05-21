#include<bits/stdc++.h>
using namespace std;
int money(int nums[],int i,int dp[]){
    if(i<0) return 0;
    if(dp[i]>0) return dp[i];
    if(i == 0 || i ==1) return nums[i];
    dp[i] = max(money(nums,i-2,dp),money(nums,i-3,dp))+nums[i];
    return dp[i];
}
int main(){
    int nums[] = {1,2,3,1,5,6,4,6};
    int n = sizeof(nums)/sizeof(nums[0]);
    int dp[110] ={0};
    int j = max(money(nums,n-1,dp),money(nums,n-2,dp));
    cout<<j<<endl;
    for(int i = 0;i<n;i++)cout<<dp[i]<<" ";
    cout<<endl;

    return 0;
}