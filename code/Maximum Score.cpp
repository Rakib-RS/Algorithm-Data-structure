#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t,a,i,n,j,k;
    scanf("%lld",&t);
    while(t--){

        scanf("%lld",&n);
        long long int sum[1000]={0},total=0,total2=0;k=1;
        for(j=1;j<=n;j++){
            long long int a[1000];
            for(i=1;i<=n;i++){
                scanf("%lld",&a[i]);
            }

            total+=a[n];
            total2+=a[n-1];
        }
        if(total>total2)
        printf("%lld\n",total);
        else
        printf("-1\n");
    }

    return 0;
}
