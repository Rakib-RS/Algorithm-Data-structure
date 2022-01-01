#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n=0,t,s=1,i,j,b[100000],sum=0;
    cin>>t;
    while(t--){
        s=1;j=1;
        while(j<=n){
            s=s*j;
            j++;
        }
        n++;
        cout<<s<<",";
        sum+=s;
        //cout<<sum<<",";
    }
    return 0;
}
