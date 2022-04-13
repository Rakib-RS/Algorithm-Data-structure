#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int t,w,n,c=0,i,j;
    while(cin>>t>>w){
        scanf("%d",&n);
        int wt[n+1],gold[n+1],dp[n+1][t+1],depth[n+1],node[n+1],k;
        for(i=0;i<n;i++){
            scanf("%d%d",&depth[i],&gold[i]);
            wt[i] = 3*depth[i]*w;
        }
        if(c) printf("\n");
        c = 1;
        for(i =0 ;i<=n;i++){
            for(j = 0;j<=t;j++){
                if(i==0 || j == 0)
                    dp[i][j] = 0;
                else if(wt[i-1]<= j){
                    k = gold[i-1]+dp[i-1][j-wt[i-1]];
                    dp[i][j] = max(k,dp[i-1][j]);

                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        printf("%d\n",dp[n][t]);
        k =0;
        i = n;
        j = t;
        while(i!=0){
            if(dp[i][j]!=dp[i-1][j]){
                node[k++] = i-1;
                j = j - wt[i-1];
            }
            i--;
        }
        printf("%d\n",k);
        for(i = k-1;i>=0;i--){
                j = node[i];
            printf("%d %d \n",depth[j],gold[j]);
        }
    }
    return 0;
}
