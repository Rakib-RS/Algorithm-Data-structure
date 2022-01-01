#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,x,a,i,k=0;
    char c;
    scanf("%lld%lld",&n,&x);
    for(i=1;i<=n;i++){
        scanf(" %c%lld",&c,&a);
        if(c=='-'){
            if(a<=x){
                x-=a;
            }
            else k++;
        }
        else x+=a;
    }

    printf("%lld %lld\n",x,k);
    return 0;
}
