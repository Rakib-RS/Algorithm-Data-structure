#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,n,k,a[23]={1,1,2,6,24,120,720,5040,40320,362880,
    3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,
    355687428096000,6402373705728000,121645100408832000,2432902008176640000};
    string s;
    scanf("%lld",&t);
    getchar();
    while(t--){
            cin>>s;
            map<char,int>mp;
        for(i=0;i<s.size();i++){
            mp[s[i]]++;
        }n=1;
        for(i=0;i<s.size();i++){
            if(mp[s[i]]>1){
               n*=a[mp[s[i]]];
               mp[s[i]]=0;
            }
        }
        j=s.size();
        j=a[j];
        j=j/n;
        printf("Data set %lld: %lld\n",tc,j);tc++;
    }

    return 0;
}
