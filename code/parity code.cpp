#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,i,t,j,k;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a;
        k=0;
        while(a){
            j=a%2;
            if(j==1)k++;
            a/=2;
        }
        if(k%2==0)
            printf("Case %lld: even\n",i);
        else printf("Case %lld: odd\n",i);
    }

    return 0;
}
