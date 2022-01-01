#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k,l;
    cin>>n;l=2*n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(k=1;k<=n*2-(i*2-1);k++){
            cout<<"*";
        }
        l-=2;
        cout<<endl;
    }
    return 0;
}

