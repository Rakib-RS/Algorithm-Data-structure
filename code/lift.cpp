#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int p,l,t,s,d,i;
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%lld%lld",&p,&l);
        d=l-p;
        if(d<0)d=-d;
        s=19+p*4+d*4;
        printf("Case %lld: %lld\n",i,s);
    }




    return 0;
}
