#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000
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
}
int main(){
    sive();
    int n,a,i,j=0,k,l;
    cin>>n;k=n;
    int b[n+5];
    while(n--){
        cin>>a;l=0;
        if(n==k-1){
            b[j++]=a;
        }
        else {
            for(i=1;;i++){
                if(b[j-1]==2){
                    i=2;break;
                }
                if(prime[i]>b[j-1]||(b[j-1])%2==0){
                    break;
                }
            }
            b[j++]=prime[i];
        }
    }
    for(i=0;i<k;i++)
        if(i<k-1)
            cout<<b[i]<<" ";
        else cout<<b[i]<<endl;
    return 0;
}

