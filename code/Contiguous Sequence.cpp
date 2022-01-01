#include<iostream>
#include<stdio.h>
using namespace std;
#define ll long long int
int main(){
    ll a[1000],n,i,j,t,tc=1,s;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);s=0;
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(i>0&&a[i]-a[i-1]==1)
                s=1;
        }
        if(s)
        printf("Case %lld: Yes\n",tc++);
        else printf("Case %lld: No\n",tc++);
    }
    return 0;
}
