#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j)
            cout<<"1"<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}


