#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,s1,s2,tc=1,s;
    scanf("%d",&t);
    while(t--){
        s1=0;
        s2=0;
        scanf("%d",&k);s=k;
        while(k--){
            scanf("%d",&n);
            if(n<=1)s2++;
            s1=s1^n;
        }
        if((s1==0&&s2!=s)||(s2==s&&s2%2!=0))
            printf("Case %d: Bob\n",tc++);
        else
            printf("Case %d: Alice\n",tc++);
    }
    return 0;
}
