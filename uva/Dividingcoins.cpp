#include <bits/stdc++.h>
using namespace std;
bool test;
bool isDivide(long long int a[],long long int m,int sum,int it,int target){
    if(sum == target) {
        test = 1;
    }
    if(test) return true;
    if(sum+a[it]<=target && it<m){
        for(int i = it;i<m;i++){
            if(sum+a[i]<=target && !test){
                isDivide(a,m,sum+a[i],i+1,target);
            }
        }
    }
    return false;
}
int main(){
    long long int n,m,i,j;
    //freopen("input.txt","r",stdin);
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&m);
        long long int a[m+5],sum=0,dif,t;
        for(i = 0 ;i<m;i++){
            scanf("%lld",&a[i]);
            sum += a[i];
        }
        bool dp[m+1][sum/2+1];
        for(i =0 ;i<=m;i++)
            dp[i][0] = true;
        for(i =1 ;i<=sum/2;i++)
            dp[0][i] = false;
        for(i = 1;i<=m;i++){
            for(j =1;j<=sum/2;j++){
                if(j<a[i-1])
                    dp[i][j] = dp[i-1][j];
                else dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
            }
        }
        for(i=sum/2;i>=0;i--){
            if(dp[m][i]) break;
        }


        dif = sum - i*2;
        printf("%lld\n",dif);

    }
}