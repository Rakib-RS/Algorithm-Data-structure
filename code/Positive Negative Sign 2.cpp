#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,i,j=0,k=0,s,t,l,a,n1,s1;
    cin>>t;
    for(l=1;l<=t;l++){
    cin>>n>>m;s=0,k=0,j=0;
        n1=n/2;
    if(m==1){s1=(n1*(n1-1))/2;s=n1+s1;s=(n1*2)+s1-s;}
    else {
            s1=(m*(m-1))/2;
    for(i=1;i<=n;i++){
            a=i;
           if(k==0){
            s=s-m*a-s1;i+=m-1;k=1;

           }
           else {
              s1=(m*(m-1))/2.0;
            s+=m*a+s1;i+=m-1;k=0;
           }
    }
    }
    printf("Case %lld: %lld\n",l,s);
    }

    return 0;
}

