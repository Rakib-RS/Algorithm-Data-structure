#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k;
    string s,s2;
    cin>>n>>s>>s2;
    if(s2=="week"){
        if (n==5)cout<<"53"<<endl;
       else if (n==6)cout<<"53"<<endl;
       else cout<<"52"<<endl;
    }
    else {
        if(n<=29)cout<<"12"<<endl;
        else if(n==30) cout<<"11"<<endl;
        else cout<<"7"<<endl;
    }
    return 0;



}
