#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,n,d,i,j;
    scanf("%d",&t);
    string s,s1;
    while(t--){
        scanf("%d%d",&n,&d);
        j=1;i=d;
        while(d%n!=0){
            d=d*10+i;
            j++;
            if(n>d)
                continue;
            d=d%n;
        }
        printf("Case %d: %d\n",tc++,j);
    }
    return 0;
}
