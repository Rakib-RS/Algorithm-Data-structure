#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,i,j,m=0,a,t=1,nu=0,c;
    cin>>n>>k;
    for(i=1;i<=k;i++){
        cin>>a;
        j=n/a;
        c=j*a;
        if(c>m){
            t=i;
            m=c;
            nu=j;
        }

    }
    cout<<t<<" "<<nu<<endl;
    return 0;

}
