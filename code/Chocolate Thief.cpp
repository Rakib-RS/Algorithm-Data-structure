#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t,n,i,j,v,ma,mi,a,b,c;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        string sma,smi,s;
    for(j=1;j<=n;j++){
            cin>>s;
            scanf("%lld%lld%lld",&a,&b,&c);
            v=a*b*c;
            if(j==1){
                sma=s;
                smi=s;
                ma=v;
                mi=v;
            }
            if(v>ma){
                ma=v;
                sma=s;
            }
            if(v<mi){
                mi=v;
                smi=s;
            }

        }
        if(mi!=ma){
            cout<<"Case "<<i<<": "<<sma<<" took chocolate from "<<smi<<endl;
        }
        else printf("Case %lld: no thief\n",i);
    }


    return 0;
}
