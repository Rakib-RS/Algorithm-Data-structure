#include<bits/stdc++.h>
using namespace std;
int main(){


    string s1,s2;
    int i,j,k,t;
    i=1;
    cin>>t;
    getline(cin,s1);
    while(t--){

        getline(cin,s1);
        getline(cin,s2);
        for(j=0;j<s1.size();j++){
            if(s1[j]==' '){
                s1.erase(j,1);
            }
            if(s1[j]-'A'>=32)
                s1[j]-=32;
        }
        for(j=0;j<s2.size();j++){
            if(s2[j]==' '){
                s2.erase(j,1);
            }
            if(s2[j]-'A'>=32)
                s2[j]-=32;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        k=s1.find(s2);
        if(k==-1)
            k=s2.find(s1);
        if(k!=-1)
            printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
        i++;
    }
    return 0;
}
