#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[101],i,k;
    for(i=0;i<=99;i++)
        a[i]=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        a[k]++;
    }
    for(i=0;i<99;i++)
        cout<<a[i]<<" ";
    cout<<a[i]<<endl;


    return 0;
}
