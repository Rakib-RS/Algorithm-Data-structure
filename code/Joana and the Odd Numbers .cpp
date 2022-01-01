#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,n,j,s=0;
    while(cin>>n){
            j=3;s=0;
        a=(n+1)/2;
        b=a*(1+(a-1));
        b=b*2-1;
        while(j--){
            s+=b;
            b=b-2;

        }
        cout<<s<<endl;
    }
    return 0;
}
