#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,n,d,k;
    double p;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
            i=n*4;
        for(i=i;;i++){
                k=i;
            d=2;p=5;j=0;
            while(k>=p){
                j+=k/p;
                k/=p;
            }
            if(j==n){
                k=i;break;
            }
            else if (j>n){
                k=0;break;
            }
        }
        if(k)
            printf("Case %lld: %lld\n",tc,k);
        else printf("Case %lld: impossible\n",tc);
        tc++;
    }

    return 0;
}

