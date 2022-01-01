#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,j,c,s,t,te,d,k,pr;
    scanf("%lld",&t);
    te=1;
    while(t--){ c=0;
        scanf("%lld",&n);
        s=sqrt(n);d=2;j=0,c=0,pr=1;
        while(n>1){
            if(n%d==0){
                n=n/d;
                if(d%2!=0){
                        c++;
                }

            }
            else {d++;pr*=(c+1);
                c=0;

            }
        }
        pr*=(c+1);
        pr-=1;;
        printf("Case %lld: %lld\n",te,pr);
        te++;
    }

    return 0;
}
