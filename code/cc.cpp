#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,i,j;
    string s,s2,s3;
    cin>>n>>m;
    getchar();
    map<string,string>mp;
    for(i=1;i<=n;i++){
        getline(cin,s);s2=s;string s1;
        for(j=0;;j++){
            /*if(s[j]=='1'||s[j]=='2'||s[j]=='3'||s[j]=='4'||s[j]=='5'||s[j]=='6'||s[j]=='7'||s[j]=='8'||
               s[j]=='9'||s[j]=='0')
                break;
                */
            if(s[j]==' ') break;
            s1+=s[j];
        }
        s2.erase(0,j+1);
        s2+=";";
        mp[s2]=" #"+s1;
    }
    for(i=1;i<=m;i++){
        getline(cin,s);s2=s;
        for(j=0;;j++){
            if(s[j]==' ') break;
        }
        s.erase(0,j+1);
        s3=mp[s];
        s2+=s3;
        cout<<s2<<endl;
    }

    return 0;
}
