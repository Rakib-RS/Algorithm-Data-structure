#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    string s,s1;
    cin>>s>>s1;
    if(s==s1)
        printf("-1\n");
    else {
        a=s.size();
        b=s1.size();
        a=max(a,b);
        cout<<a<<endl;
    }

    return 0;
}
