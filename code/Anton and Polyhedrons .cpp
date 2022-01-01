#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    long long int t,sum=0;
    cin>>t;
    while(t--){
        cin>>s;
        if(s[0]=='I')
            sum+=20;
        else if(s[0]=='D')
            sum+=12;
        else if(s[0]=='O')
            sum+=8;
        else if(s[0]=='C')
            sum+=6;
        else sum+=4;

    }
    cout<<sum<<endl;
    return 0;
}
