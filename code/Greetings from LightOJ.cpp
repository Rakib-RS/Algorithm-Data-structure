#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d",&a,&b);
        b=a+b;
        printf("Case %d: %d\n",i,b);
    }
    return 0;
}
