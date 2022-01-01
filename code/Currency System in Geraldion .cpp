#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a[100000],i,j,s=99999999;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(s>a[i])
            s=a[i];
    }
    j=s-1;
    if(j==0)
        cout<<"-1"<<endl;
    else cout<<"1"<<endl;
    return 0;
}
