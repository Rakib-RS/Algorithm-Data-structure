#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l=0,r=0,i,ma=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]=='1')
            l++;
        else r++;

    }
    ma=min(l,r);
    cout<<ma+ma<<endl;

    return 0;
}
