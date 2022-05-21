#include<iostream>
using namespace std;
int dp[210][15][25];
int arr[210];
int n,m,d;
int f(int i,int cnt,int sum){
    if(cnt == m) {
        if(sum % d==0) return dp[i][cnt][sum] = 1;
        else return dp[i][cnt][sum] = 0;
    }
    if(i==n) return dp[i][cnt][sum] = 0;
    if(dp[i][cnt][sum]>=0) return dp[i][cnt][sum];

    return dp[i][cnt][sum] = f(i+1,cnt+1,((sum+arr[i])%d +d)%d) + f(i+1,cnt,sum);

}
void clearDp(){
    int i,j,k;
    for(i=0;i<210;i++){
        for(j=0;j<15;j++){
            for(k=0;k<25;k++) dp[i][j][k] = -1;
        }
    }
}
int main(){
    int q,ct,i,j,qt;
    ct = 1;
    //freopen("input.txt","r",stdin);
    while(1){
        scanf("%d%d",&n,&q);
        if(n ==0 && q==0) break;
        for(i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("SET %d:\n",ct++);
        qt =1;
        while(q--){
            scanf("%d%d",&d,&m);
            clearDp();
            int ans = f(0,0,0);
            printf("QUERY %d: %d\n",qt++,ans);
        }
    }
    return 0;
}