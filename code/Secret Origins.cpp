#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,a,c,n,i,j,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        int a[200]={0};
        k=n;c=1;
        while(n>0){
            if((n & 1)!=0){
                a[1]++;
            }
            else c=0;
            n=n>>1;
        }
        if(a[1]==1)k=k*2;
        else if(c==1) k=k*2+1;
        else{ k=k+1;
        while(1){
                j=k;
                int b[200]={0};
            while(j>0){
                if((j&1)!=0)
                    b[1]++;
                    j=j>>1;
            }
            if(a[1]==b[1])break;
            else k++;
        }
        }
        printf("Case %lld: %lld\n",i,k);
    }

    return 0;
}
