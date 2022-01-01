#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,n,k,i;
    string s,s1;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&k);
        s='A';
        for(i=1;i<n;i++)
        s+='A'+i;s1=s;
        printf("Case %lld:\n",tc);tc++;
        while(k--){
            cout<<s<<endl;
            next_permutation(s.begin(),s.end());
            if(s==s1)break;
        }
    }
    return 0;
}
