#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,i,j,c=0,t,te=1,m,n,d1,d2,d3,d4;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&a,&b);
            d1=a/3;d2=d1;
            if(a%3==0) d1--;
            d1+=d2;
            d3=b/3;d4=d3;
            if(b%3==2) d4++;
            d3+=d4;
            m=d3-d1;
        printf("Case %lld: %lld\n",te,m);
        te++;
    }

    return 0;
}
