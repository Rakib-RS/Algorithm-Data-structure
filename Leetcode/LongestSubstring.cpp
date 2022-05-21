#include<bits/stdc++.h>
using namespace std;
int longest(string s){
    int i,j,k,l,ml=0;
    l = 0;
    map<char,int>mp;
    for(i = 0;i<s.size();i++){
        //cout<<l<<" ";
        if(!mp[s[i]]){
            
            //cout<<"ok";
            l++;
            mp[s[i]] = l;
        }
        else{
            mp.clear();
            mp[s[i]] = i+1;
            ml = max(ml,l);
            
        }
    }
    ml = max(ml,l);
    return ml;
}
int main(){
    string s ="pwwkew";
    cout<<longest(s);
    return 0;
}