#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  int n,t,i,j,c,a,b,k,l;
    cin>>t;
    while(t--){
        cin>>a>>b;
        j=1;k=1;i=0;
        while(a--){
            cin>>c;
                if(i==1&&c>b)j=0;
                if(c==b) k=0;
                if(k==1&&c<b)j=0;
                if(c<=b&&i==0){
                    l=c;i=1;
                }

        }
        if(j)cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}

