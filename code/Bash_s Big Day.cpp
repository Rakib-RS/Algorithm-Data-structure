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
}
int main()
{
    int n,i,j,a[200000],mx=1,k,c=0,b;
    cin>>n;
    /*sive();*/
    map<int,int>mp,m1;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>1){mp[a[i]]++;
        mx=max(mx,mp[a[i]]);
        }
    }
    for(i=0;i<n;i++){
        for(j=2;j<=sqrt(a[i]);j++){
            if(a[i]%j==0){
                mp[j]++;
                mx=max(mx,mp[j]);
                b=a[i]/j;
                if(j!=b)
                    mp[b]++;
                    mx=max(mx,mp[b]);
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}

