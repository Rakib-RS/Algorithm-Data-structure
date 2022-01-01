#include<bits/stdc++.h>
using namespace std;
bool reverse(long long int n){
    long long int s=0,b=n;
    while(n){
        s=s*10+n%10;
        n/=10;
    }
    return s==b;

}
int main(){
    long long int i,j,k,n,t,s;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);

          reverse(n)?  printf("Case %lld: Yes\n",i):printf("Case %lld: No\n",i);
    }


}
