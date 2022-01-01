#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x,b;
    cin>>n>>k>>x;
    int a[n+5],i,j,s=0;
    b=n-1;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<=k;i++){
        a[b--]=x;
    }
    for(i=0;i<n;i++)
        s+=a[i];
    cout<<s<<endl;

}
