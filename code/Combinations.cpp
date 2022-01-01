#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,n,k,d,m,div,mul,mul2,mod= 1000003;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&k);
        d=n-k;
        if(d>=k){
            m=d;
        }
        else m=k;
        if(m==k)
            div=d;
        else div=k;
        mul=1;
        //cout<<m<<endl;
        for(i=n;i>m;i--){
                //cout<<mul<<endl;
            mul*=i;
            mul%=mod;
        }
        mul2=1;
        for(i=1;i<=div;i++){
            mul2*=i;
            mul2%=mod;
        }
        cout<<mul<<endl;
        cout<<mul2<<endl;
        j=(mul/mul2)%mod;
        cout<<j<<endl;
    }
    return 0;
}
