#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c=0,i,j,k=1;
    cin>>a>>b;
    i=a;j=b;
    if(a!=1&&b!=1){
            c=a/b;
     a=a%b;
    while(a){
        if(a==1||b==1) break;
            c+=b/a;
            b%=a;
            i=a;
            a=b;
            b=i;




    }
    }
    c+=a*b;
    cout<<c<<endl;
    return 0;
}
