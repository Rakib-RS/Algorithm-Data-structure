#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
bool st[1000005];
int prime[100000];
void sive(){
    int n=100000,i,j=0,k=1;
    prime[j++]=2;
    st[0]=st[1]=1;
    for(j=3;j<=n;j+=2){
        if(st[j]!=1){
            prime[k++]=j;
            if(n/j>=j){
                for(i=j*j;i<n;i+=2*j)
                    st[i]=1;
            }
        }

    }
    cout<<prime[k-1]<<endl;
}
int main()
{
    int n,i,j,a[200000],mx=1,k,c=0;
    cin>>n;
    sive();
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;prime[i]<100;i++){
            c=0;
        for(j=0;j<n;j++){
            if(a[j]%prime[i]==0){
                c++;
                cout<<prime[i]<<endl;
            }
        }
        mx=max(mx,c);
    }
    cout<<mx<<endl;
    return 0;
}
