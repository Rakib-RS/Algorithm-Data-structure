#include<iostream>
using namespace std;
int primeS[10000000];
bool prime[10000000];
int solution[1125][15]={};
int count;
void seive(){
    int i,j;
    count = 0;
    primeS[count++] = 2;
   for(i = 4;i<10000000;i+=2){
      prime[i] = true;
   }
   for(i = 3;i<10000000;i+=2){
       if(!prime[i]){
           primeS[count++] = i;
           for(j = 3;i*j<10000000;j+=2){
               prime[i*j] = true;
           }
       }
   }
}
void solve(){
    int i,j,k;
    solution[0][0] = 1;
    for(i = 0;i<count;i++){
        for(j = 1120;j>=primeS[i];j--){
            for(k=1;k<=14;k++){
                solution[j][k] += solution[j-primeS[i]][k-1];
            }
        }
    }
}
int main(){
    seive();
    int n,k;
    solve();
   while(cin>>n>>k && n && k){
       cout<<solution[n][k]<<endl;
   }
    return 0;
}