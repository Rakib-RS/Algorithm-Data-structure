#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,c1,c2,c3,c,d2,n2,d2,n3,n31,n21,s,total,mul,mu;
    scanf("%lld",&t);
    while(t--){
            c=0;mul=1;
        scanf("%lld",&n);
        if(n%2==0)c++;
        if(n%3==0)c++;
        d2=n%2;
        if(d2==1){
            n2=n/2-1;
            for(i=2;i<=n2+1;i++){
                mul*=i;
            }
        }
        d3=n%3;
        if(d3==2){
            n3=n/2-1;
        }
        if(d3==1){
            n31=n/3-2;
            n21=2;

        }
    }

    return 0;
}
