#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,c,i,j,tc=1;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&c);
        j=0;
        if(n>0){
        j=c/(2*n);
        double d=c/(2.0*n);
        if((d-j)>0.5)j++;
        }
        if(j==0&&c>n&&n>0) j=1;
        printf("Case %lld: %lld\n",tc,j);
        tc++;
    }
    return 0;
}
