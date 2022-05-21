#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = -123;
    string s ="";
    int b =a;
    while(a){
        if(a%10<0){
            int r = -(a%10);
            s += (r+'0');
        }
        a = a/10;
        //cout<<a<<endl;
    }
    if(b<0) s+='-';
    cout<<s<<endl;
    return 0;
}