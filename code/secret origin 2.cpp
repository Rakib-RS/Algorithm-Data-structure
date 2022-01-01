#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,a,c,n,i,j,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        int a[200]={0};k=n;
        while(n>0){
            if((n & 1)!=0){
                a[1]++;
            }
            n=n>>1;
        }
        for(k=k+1;;k++){
            j=k;
            int b[5]={0};
            while(j>0){
                if(j%2==1)
                    b[1]++;
                if(b[1]>a[1])
                    break;
                j/=2;
            }
            if(a[1]==b[1])
                break;
        }


        printf("Case %lld: %lld\n",i,k);
    }

    return 0;
}

