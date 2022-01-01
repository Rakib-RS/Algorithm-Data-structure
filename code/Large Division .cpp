#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,b,k,d,t,sum;
    string s;cin>>t;
    for(i=1;i<=t;i++){

        cin>>s;
        cin>>b;
        if(s[0]=='-'){d=s[1]-'0';j=2;}
        else {
            d=s[0]-'0';j=1;
        }
        if(b<0)b=-b;
        for(j=j;j<s.size();j++){

            if(d<b){
                d=d*10+s[j]-'0';
            }
            if(d<b) continue;
            d%=b;
        }
        if(d)printf("Case %lld: not divisible\n",i);
        else printf("Case %lld: divisible\n",i);

    }

    return 0;
}
