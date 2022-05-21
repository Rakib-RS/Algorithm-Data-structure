#include<iostream>
using namespace std;
int main(){
    int n,arr[10007],i,j,k,sum;
    string s;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d",&n);
    getchar();
    while(n--){
       getline(cin,s);
       j = 0;
       k = 0;
       //cout<<s<<endl;
       for(i = 0;i<s.size();i++){
           if(s[i]==' '){
               arr[j++] = k;
               k =0;
               continue;
           }
           k = k*10 +(s[i]-'0');
       }
       arr[j++] = k;
       sum = 0;
      for(i = 0;i<j;i++){
          sum += arr[i];
      }
      //cout<<"sum "<<sum<<endl;
      if(sum%2==0){
          sum = sum/2;
          bool dp[j+5][sum+5];
          for(i = 0;i<j+5;i++){
              for(k=0;k<sum+5;k++)
              dp[i][k] = false;
          }
          //cout<<j<<endl;
          for(i = 0;i<=j;i++){
              //cout<<arr[i]<<" ";
              for(k = 0;k<=sum;k++){
                  
                  if(k==0){
                      dp[i][k] = true;
                      continue;
                  }
                  else if(i==0 ){
                      dp[i][j] = false;
                      continue;
                  }
                  if(arr[i-1]<=k){
                      dp[i][k] = dp[i-1][k-arr[i-1]] || dp[i-1][k];
                  }
                  else dp[i][k] = dp[i-1][k];
                  
              }
          }

         // cout<<dp[j][sum];
          if(dp[j][sum])printf("YES\n");
          else printf("NO\n");
      }
      else printf("NO\n");

    }
    return 0;
}