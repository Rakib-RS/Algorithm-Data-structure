#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=1,i,mx=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){

        if((s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')){
            c=1;
        }
        else c++;
        if(mx<c) mx=c;
    }

    cout<<mx<<endl;
 return 0;
}
