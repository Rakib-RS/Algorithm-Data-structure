#include<bits/stdc++.h>
using namespace std;
    int main(){
    int t,n,i,j,ma,an;
    string s;
    scanf("%d",&t);
    while(t--){
        ma=0;
        cin>>s;
        cin>>n;
        map<char,int>mp;
        for(i=0;i<n;i++){
            mp[s[i]]++;
            j=mp[s[i]];

           ma=max(ma,j);

        }
        an=n-ma;
        cout<<an<<endl;
        }
    return 0;
    }

