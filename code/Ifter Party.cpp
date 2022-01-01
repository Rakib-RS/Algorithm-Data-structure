#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,n,s,d,p,l,a[50000];
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&p,&l);
        n=p-l;j=0;a[0]=0;
        for(i=1;i<=sqrt(n);i++){
            if(n%i==0){
                s=n/i;
                if(i>l)
                    a[j++]=i;
                if(s!=i&&s>l)
                    a[j++]=s;
            }
        }
        printf("Case %lld: ",tc);tc++;
        sort(a,a+j);
        if(j>0){
            for(i=0;i<j;i++){
                if(i<j-1)
                    printf("%lld ",a[i]);
                else printf("%lld\n",a[i]);
            }
        }
        else printf("impossible\n");
    }
    return 0;
}
