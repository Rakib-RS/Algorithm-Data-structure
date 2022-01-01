#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,z=0,o=-10,m,i,c1,c2;
        string s[110];
        map<string,int>mp;
        cin>>n;
        getchar();
        for(i=0;i<n;i++){
            cin>>s[i];
            mp[s[i]]++;
            z=max(mp[s[i]],z);
        }
        cout<<z<<endl;
    return 0;
}
