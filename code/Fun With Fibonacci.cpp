#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,n,m,e,o,d1,d2;
    cin>>t;
    while(t--){
        cin>>n>>m;o=0;e=0;
        for(i=n;i<=m;i++){
            if(i%3==1)
                e++;
            else o++;
        }
        printf("Case %lld:\n",tc++);
        printf("Odd = %lld\n",o);
        printf("Even = %lld\n",e);


    }
    return 0;
}
