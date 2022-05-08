#include<iostream>
using namespace std;
int max(int a,int b){
    return (a>b)? a:b;
}
void knapsack(int value[],int wt[],int (&dp)[110][55],int p){
    int i,j;
    for(i =0;i<=p;i++){
        for(j = 0;j<=50;j++){
            if(i== 0 || j ==0) dp[i][j] = 0;
            else if(wt[i-1]<=j){
                dp[i][j] = max((value[i-1]+dp[i-1][j-wt[i-1]]),dp[i-1][j]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
}
int main(){
    int i,j,t,p;
    //freopen("input.txt","r",stdin);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&p);
        int value[p+5];
        int wt[p+5],n,sum,c;
        for(i = 0;i<p;i++){
            scanf("%d%d",&value[i],&wt[i]);
        }
        sum = 0;
        int dp[p+5][110];
        //knapsack(value,wt,dp,p);
        scanf("%d",&n);
        for(i =0;i<=p;i++){
            for(j = 0;j<=100;j++){
                if(i== 0 || j ==0) dp[i][j] = 0;
                else if(wt[i-1]<=j){
                    dp[i][j] = max((value[i-1]+dp[i-1][j-wt[i-1]]),dp[i-1][j]);
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        while(n--){
            scanf("%d",&c);
            sum += dp[p][c];
            //cout<<dp[p][c]<<endl;
        }
        printf("%d\n",sum);
    }
    return 0;
}