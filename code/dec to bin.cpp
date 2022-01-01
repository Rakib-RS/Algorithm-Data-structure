#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    unsigned long long int m=32768,b;
    while(cin>>a){
        if(a>100)break;
            b=m;
        cout<<a<<" ";
        while(b>0){
            if((a & b)==0)cout<<"0";
            else cout<<"1";
            b=b>>1;
        }
        cout<<endl;
    }

    return 0;

}
