#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,s,n,m,i=1,j=0;
    scanf("%lld%lld%lld",&t,&s,&n);
    if(n==t)j=1;
    else if(t+s==n)j=1;
    else if(t+s+1==n)j=1;
    else if(s!=0){
     if(n>=s&&(n%s==t||n%s==t+1))j=1;
    else if((t<=n)&&(((n-t)%s==0&&(n-t/s>=1))||(((n-t-1)/s>=1)&&(n-t-1)%s==0))){ j=1;};
    }
    if(j)printf("YES\n");
    else printf("NO\n");
    return 0;
}
