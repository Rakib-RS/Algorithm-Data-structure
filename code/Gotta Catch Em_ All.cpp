#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,b,l,u,a[10],r;
    string s,s1;
    getline(cin,s);
    map<char,int>mp;
    for(i=0;i<s.size();i++)
        mp[s[i]]++;
    a[0]=mp['b'];
    a[1]=mp['l'];
    a[2]=mp['u']/2;
    a[3]=mp['a']/2;
    a[4]=mp['s'];
    a[5]=mp['r'];
    a[6]=mp['B'];
    for(i=0;i<7;i++){
        if(i==0)
            r=a[i];
        r=min(r,a[i]);
    }
    cout<<r<<endl;

    return 0;
}
