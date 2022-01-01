#include<bits/stdc++.h>
using namespace std;
    bool status[12000000];
    int prime[1000000];
void seive(){
    int   n=10000000,i,j,k=1;
    prime[k++]=2;
    status[0]=status[1]=1;
    for(i=4;i<=sqrt(n);i+=2)
        status[i]=1;
    for(i=3;i<=sqrt(n);i+=2){
        if(status[i]==0){
                prime[k++]=i;
            for(j=i*i;j<=n;j+=i)
                status[j]=1;
        }
    }
    status[1]=1;
    for(k=1;k<=1000;k++)
        cout<<prime[k]<<endl;


}
int main(){
    seive();

}

