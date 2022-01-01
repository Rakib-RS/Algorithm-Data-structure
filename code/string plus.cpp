#include<bits/stdc++.h>
using namespace std;
int main(){
    string s[100];int i;
    s[2]='1';
    for(i=3;i<=5;i++){
        s[i]=s[i-1]+'2';

     for(i=3;i<=5;i++){
        cout<<"s"<<"["<<i<<"]="<<s[i]<<endl;
    }
    }

    return 0;
}
