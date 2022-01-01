#include<bits/stdc++.h>
using namespace std;
int prime(long long int n){
    long long int s=1,i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            s=0;break;
        }
    }
    return s;


}
int main(){
    long long int i,j,l,u,c1,c2,d1,d2,s,t,k;
    while(1){
        scanf("%lld%lld",&l,&u);c1=0;c2=0;d1=0;d2=0;
        if(l==2){
            c1=l;l++;
        }
        else if(l%2==0){
            l++;
        }
        for(i=l;i<=u;i++){
            j=prime(i);
            if(j){
                if(c1>0){
                    c2=i;break;
                }
                else c1=i;
            }
        }
        if(u%2==0)u--;
        for(k=u;k>i;k--){
                j=prime(i);
            if(j){
                if(d1>0){
                    d2=i;break;
                }
                else d1=i;
            }
        }
        if(c1>0&&c2>0&&d1>0&&d2>0)
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",c1,c2,d1,d2);
        else if(c1>0&&c2>0&&d1>>0)
            printf("%lld,%lld are closest, %lld is most distant.\n",c1,c2,d1);
        else if(c1>0&&c2>0)
            printf("%lld,%lld are closest.\n",c1,c2);
        else printf("There are no adjacent primes.\n");
    }


    return 0;
}
