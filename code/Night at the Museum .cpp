#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,a,b,c=0,sum=0;
    string s;
    cin>>s;
    a=s[0]-'a';
    b=26-a;
    b=min(a,b);
    sum=b;
    for(i=1;i<s.size();i++){
        if(s[i]>s[i-1])
        a=s[i]-s[i-1];
    else a=s[i-1]-s[i];
        b=26-a;
        b=min(a,b);

        sum+=b;
    }
    cout<<sum<<endl;
    return 0;
}
