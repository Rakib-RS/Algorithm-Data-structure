#include<bits/stdc++.h>
using namespace std;
    bool s[10000000];
    void seive(){
        int n=10000000,i,j;
        for(i=2;i*i<=n;i++){
            if(s[i]==0){
                for(j=i*2;j<=n;j+=i){
                    s[j]=1;
                }
            }
        }

    }
int main(){
    seive();
    return 0;
}
