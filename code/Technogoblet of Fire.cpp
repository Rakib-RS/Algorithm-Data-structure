#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,s,i,j,v,c;
    cin>>n>>m>>k;
    int a[m+1]={0},p[n+1],id[m+1]={0};
    for(i=1;i<=n;i++)
        cin>>p[i];
    for(i=1;i<=n;i++){
        cin>>v;
        if(a[v]<p[i]){
            a[v]=p[i];
            id[v]=i;
        }
    }
    c=0;
    while(k--){
        cin>>v;
        for(i=1;i<=m;i++){
            if(id[i]==v)
                break;
        }
        if(id[i]!=v||i>m)
        c++;
    }
    cout<<c<<endl;
   return 0;
}
