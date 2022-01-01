#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,j,c,r,s;
    cin>>n>>k;r=k;
    s=n*4;
    if(k<=(s-(2*n+4))){
        cout<<"YES\n";
        for(i=1;i<=4;i++){
            for(j=1;j<=n;j++){
                if(i==1||i==4||j==1||j==n||r<=0){
                    cout<<".";
                }
                else {
                        cout<<"#";r--;
                }
            }
            cout<<endl;
        }
    }
    else cout<<"NO\n";
    return 0;
}
