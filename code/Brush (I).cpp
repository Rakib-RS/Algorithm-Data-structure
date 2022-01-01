#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,sum,i,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        sum=0;
        while(n--){
            scanf("%d",&a);
            if(a>0)
                sum+=a;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
