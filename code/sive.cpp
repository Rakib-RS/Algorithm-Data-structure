#include<bits/stdc++.h>
using namespace std;
#define MAX 2236
#define N 700000
using namespace std;
bool st[MAX];
int prime[N];
void sive(){
    int i,j,n,k;
    j=1;
    prime[j++]=2;
    st[0]=st[1]=1;
   for(i=3;i<=(MAX);i+=2){
        if(st[i]==0){
            prime[j++]=i;
            if(MAX/i>=i){
            for(k=i*i;k<MAX;k+=(2*i))
                st[k]=1;
            }
        }
    }
    cout<<j<<endl;
    /*for(i=1;i<=10;i++)
        cout<<prime[i]<<endl;*/
}
int main(){
    sive();
    cout<<sqrt(5*1000000);
    return 0;
}
