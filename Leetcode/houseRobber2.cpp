#include<bits/stdc++.h>
using namespace std;
bool first;
int money(int nums[],int i,int dp[],int c){
    if(i<0) return 0;
    if(dp[i]>0) return dp[i];
    if(c && i == 0) return 0;
    if(!c && i ==0) return nums[i];
    if(i==1) return nums[i];
    if(i ==1) return nums[i];
    dp[i] = max(money(nums,i-2,dp,c),money(nums,i-3,dp,c))+nums[i];
    return dp[i];
}
int main(){
    int nums[] = {1,2,1,1,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    int dp[110] ={0};
    first = false;
   
    int j = money(nums,n-1,dp,1);
     int dp2[110] ={0};
    int j2 = money(nums,n-2,dp2,0);
    
    j = max(j,j2);

    cout<<j<<endl;
    // int k,l=0;
    // if(n>=5)
    // k = max(max(dp[n-1]-nums[n-1],dp[n-1]-nums[0]),dp[n-2]);
    // if(n==4)
    // l = max(nums[0]+nums[2],nums[1]+nums[3]);
    // if(n==3)
    // k = max(max(nums[0],nums[1]),nums[2]);
    // cout<<j<<endl;
    // cout<<k<<endl;
    for(int i = 0;i<n;i++)cout<<dp[i]<<" ";
    cout<<endl;

    return 0;
}