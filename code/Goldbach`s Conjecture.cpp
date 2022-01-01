#include<bits/stdc++.h>
using namespace std;
bool status[12000000];
int prime[1000000];
void seive();
int main(){
    int t,tc=1,n,m,i,j,s,c;
    seive();
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);c=0;
        for(i=1;prime[i]<=n/2;i++){
            j=n-prime[i];
            if((j%2!=0&&status[j]==0)||j==2){
                c++;
            }
        }
        printf("Case %d: %d\n",tc,c);
        tc++;
    }
    return 0;
}
void seive(){
    int   n=10000000,i,j,k=1;
    prime[k++]=2;
    status[0]=status[1]=1;
    for(i=3;i<=n;i+=2){
        if(status[i]==0){
                prime[k++]=i;
            if(n/i>=i){
                for(j=i*i;j<n;j+=2*i)
                    status[j]=1;
            }
        }
    }
}
