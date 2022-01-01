#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,n,c,f;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);c=0;f=1;
        while(n%2==0){
            n=n/2;
            c++;
        }
        f*=(c+1);c=0;
        j=3;
        while(j*j<=n){
            if(n%j==0){
                n/=j;
                c++;
            }
            else{
                f*=(c+1);j+=2;c=0;
            }
        }
        if(n==j)c++;
        f*=(c+1);
        if(n!=j&&n>1) f*=2;f--;
        printf("Case %lld: %lld\n",tc,f);tc++;
    }


    return 0;
}
