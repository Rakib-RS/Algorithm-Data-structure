#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,n,m,i,j,d;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&m);
        getchar();d=1;string s1,s2;
        map<string,int>m1,m2;j=0;n=1;
        while(m--){
            cin>>s1>>s2;
            if(m1[s2]!=0&&m2[s1]!=0){d=0;
            }
            m1[s1]++,m2[s2]++;

        }
        if(d)
            printf("Case %lld: Yes\n",tc);
        else printf("Case %lld: No\n",tc);
        tc++;
    }
    return 0;
}
