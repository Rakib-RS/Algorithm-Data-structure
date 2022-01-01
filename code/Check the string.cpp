#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    map<char,int>mp;
    cin>>s;
    int j=1;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        if(s[i]<s[i-1])
            j=0;
    }
    if((mp['a']==mp['c']||mp['b']==mp['c'])&&j==1&&mp['c']>0&&mp['a']>0&&mp['b']>0)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
