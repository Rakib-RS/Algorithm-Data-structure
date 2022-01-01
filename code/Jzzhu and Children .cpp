#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,m=0,a[100000],in,n,ma=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
            cin>>a[i];
        if(i==1)ma=a[i];
        if(ma<=a[i]){
            ma=a[i];
            in=i;
        }
    }
    cout<<in<<endl;
    return 0;
}
