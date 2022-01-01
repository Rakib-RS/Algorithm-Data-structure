#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,m,n,i,j,c,sum,a[200][200],ma,i1,j1,i2,j2;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);m=n;ma=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%lld",&a[i][j]);
                /*if(ma<a[i][j]){
                    ma=a[i][j];
                    i1=i;j1=j;
                }*/
            }
        }
        ma=0;sum=0;
        while(m--){
                ma=0;
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(ma<a[i][j]){
                        ma=a[i][j];
                        i1=i;j1=j;
                    }
                }
            }
            for(j2=1;j2<=n;j2++)
                a[i1][j2]=0;
            for(i2=1;i2<=n;i2++)
                a[i2][j1]=0;
            sum+=ma;
        }
        printf("Case %lld: %lld\n",tc,sum);tc++;
    }

    return 0;
}
