#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,tc=1,i,j,n;
    char s[100];
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        getchar();
        scanf("%s",s);j=0;
        if(strcmp(s,"Alice")==0){
            if(n%3!=1)
                j=1;
        }
        else{
            if(n%3==0)
                j=1;
        }
        if(j)
            printf("Case %lld: Alice\n",tc);
        else printf("Case %lld: Bob\n",tc);
        tc++;
    }

    return 0;
}
