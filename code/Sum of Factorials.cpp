#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n=0,i,j,t,tc=1,s,f,a[22]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,
    121645100408832000,2432902008176640000},b[22]={1,2,4,10,34,154,874,5914,46234,409114,4037914,43954714,522956314,6749977114,93928268314,1401602636314,22324392524314,
    378011820620314,6780385526348314,128425485935180314,2561327494111820314},c[20000],k;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);k=0;
        printf("Case %lld: ",tc);tc++;
        for(i=0;;i++){
            if(a[i]>=n)
                break;
        }
        if(a[i]==n){
            printf("%lld!\n",i);
        }
        else if(a[i]>b[i]) printf("impossible\n");
        else{ c[k++]=i-1;n-=a[i-1];
            for(j=i-2;j>=0;j--){
                if(n>=a[j]){
                    c[k++]=j;
                    n-=a[j];
                }
                if(n==0) break;
            }
            if(n==0){
                for(i=k-1;i>=0;i--){
                    if(i>0)
                        printf("%lld!+",c[i]);
                    else
                        printf("%lld!\n",c[i]);
                }
            }
            else printf("impossible\n");
        }
    }
    return 0;
}
