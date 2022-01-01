#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll t,tc=1,i,j,n,numerator,denominator,sum;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    denominator=n;
    numerator=sum=0;
    while(n--){
        scanf("%lld",&j);
        if(j<0){
            denominator--;
            j=-j;
            sum+=j;
        }
        else {
            sum+=j;
        }
    }
    if(denominator>0){
        for(i=2;i<=denominator;i++){
            if(sum%i==0&&denominator%i==0){
                sum=sum/i;
                denominator/=i;
                i=1;
            }
        }
    }
    if(denominator>0)
        printf("Case %lld: %lld/%lld\n",tc++,sum,denominator);
    else printf("Case %lld: inf\n",tc++);
  }
    return 0;
}
