#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    int a,b,c=1,n,m,i,j;
    cin>>n>>m;
    for(i=0;i<n;i++){
            cin>>a>>b;
        for(j=a;j<b;j++)
            mp[j]++;
        if(i==n-1)mp[b]++;
    }
    for(i=0;i<=m;i++){
        if(mp[i]<1){
            c=0;
            break;
        }
    }
    if(c){
        printf("YES\n");
    }
    else printf("NO\n");


    return 0;
}

