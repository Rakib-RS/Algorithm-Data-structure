#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,r,i,j,s[10000],b[10000],sa=100000,ba=0,ct;
    cin>>n>>m>>r;
    for(i=1;i<=n;i++){
        cin>>s[i];
        sa=min(sa,s[i]);
    }
    for(i=1;i<=m;i++){
        cin>>b[i];
        ba=max(ba,b[i]);
    }
    if(sa<ba){
    ct=r/sa;
    r=r-ct*sa;
    r+=ba*ct;
    }
    cout<<r<<endl;


    return 0;
}
