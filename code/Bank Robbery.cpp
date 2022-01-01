#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main(){
    ll a,i,j,k,d,t,tc=1;
    scanf("%llu",&t);
    while(t--){
        scanf("%llu",&d);
        j=(10*d)/9;
        printf("Case %llu:",tc++);
        for(i=j-1;i<=j+110;i++){
            k=i;
            if(k-k/10==d){
                printf(" %llu",i);
            }
        }
        printf("\n");
    }

    return 0;
}
