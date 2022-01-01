#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c=0,i,j,k=1;
    cin>>a>>b;
    i=a;j=b;
    if(a!=1&&b!=1){
     a=a-b;
    while(a!=1||b!=1){
        if(k==1){c=1;k=0;}
        if(a<=b)
            b-=a;
        else a-=b;
        c++;

    }
    }

    c+=a*b;
    if(i==1&&j==1) c=1;
    cout<<c<<endl;




}
