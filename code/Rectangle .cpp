#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a[4],i,j;
    cin>>t;
    while(t--){
        for(i=0;i<4;i++){
            cin>>a[i];
        }
        sort(a,a+4);
        if(a[0]==a[1]&&a[2]==a[3])
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
