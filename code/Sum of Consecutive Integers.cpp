#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,t,tc=1,c=0,a,j,k,p,m;
    scanf("%lld",&t);
    while(t--){
            c=0;
        scanf("%lld",&n);m=n;
        if(n%2!=0)c++;
        while(n%2==0){
            n=n/2;
        }
        m=n;
        j=3;k=0;p=1;
        while(j*j<=n){
            if(n%j==0){
                n/=j;
                k++;
            }
            else{
                j+=2;
                p=p*(k+1);
                k=0;
            }
        }
        if(j==n&&k>0){ k++;
            p=p*(k+1);
        }
        else {
                if(k>0) p*=(k+1);
                if(n%2!=0&&n!=m&&n!=1)p*=2;
                else if(n!=1) p++;
        }
        c=p-1;

        printf("Case %lld: %lld\n",tc,c);
        tc++;
    }

    return 0;
}
