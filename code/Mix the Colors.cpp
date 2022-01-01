#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a[120000],i,j,mx=0;
    map<int,int>mp;
    cin>>t;
    while(t--){
        cin>>n;mx=0;j=n;i=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            j=a[i];
            mp[j]++;
        }
        for(i=0;i<n;i++){
            j=a[i];
            if(mp[j]>1){
                mx+=mp[j]-1;
                mp[j]=0;
            }
        }
        mp.clear();
        cout<<mx<<endl;
    }
    return 0;
}
