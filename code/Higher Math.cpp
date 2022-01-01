#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[5],m,n,b,t,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
        for(j=0;j<3;j++){
            scanf("%lld",&a[j]);

        }
        sort(a,a+3);
        m=a[2]*a[2];
        n=a[1]*a[1];
        b=a[0]*a[0];
        if(m==n+b){
            printf("Case %lld: yes\n",i);
        }
        else printf("Case %lld: no\n",i);
    }


    return 0;
}
