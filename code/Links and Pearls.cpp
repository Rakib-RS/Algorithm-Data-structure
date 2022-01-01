#include<bits/stdc++.h>
using namespace std;
int main(){
    int l=0,p=0,i;
    double j;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]=='-')
            l++;
        else p++;
    }
    i=0;
    j=0;
    if(p>0){
        i=l/p;
        j=(l*1.0)/p;
    }
    if(j-i==0)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
