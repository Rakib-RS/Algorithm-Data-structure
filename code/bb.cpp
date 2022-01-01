#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[16]={1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597},i,j,n,k;
    cin>>n;
    for(i=1;i<=n;i++){
            k=0;
        for(j=0;j<16;j++){
            if(i==a[j]){
                k=1;break;
            }
        }
        if(k)cout<<"O";
        else cout<<"o";
    }
    cout<<endl;

    return 0;
}
