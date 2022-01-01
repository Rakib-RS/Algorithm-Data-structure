#include<bits/stdc++.h>
using namespace std;
int main(){
        int a,b,c=0,i;
        string s;
        cin>>s;
        map<char,int>mp;
        for(i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]==1)
                c++;
        }
        cout<<c<<endl;

    return 0;
}
