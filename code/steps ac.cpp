#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,i,j,a,b,s,r,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        d=b-a;
        s=sqrt(d);
        if(d==0)cout<<d<<endl;
        else if(s*s==d){ cout<<2*s-1<<endl;}
        else{ j=d/s;
            if(d%s==0) r=1;else r=0;
            cout<<s+d/s-r<<endl;
        }
    }
    return 0;
}
