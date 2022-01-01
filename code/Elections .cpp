#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1000],n,m,c,i,j,mx=0,p;
    cin>>n>>m;
    map<int,int>mp;
    while(m--){
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        mx=-1;
        for(i=1;i<=n;i++){
            if(a[i]>mx){
                mx=a[i];
                p=i;
            }
        }
        mp[p]++;
    }
    mx=-1;
    for(i=1;i<=n;i++){
        if(mp[i]>mx){
            mx=mp[i];
            p=i;
        }
    }
    cout<<p<<endl;
    return 0;
}
