#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=i+1;j<=n+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

