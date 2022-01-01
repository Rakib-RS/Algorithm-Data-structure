#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j;
    char c;
    string s[10],s1;
    s[2]="2";
    s[3]="3";
    s[4]="223";
    s[5]="5";
    s[6]="53";
    s[7]="7";
    s[8]="2227";
    s[9]="7332";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>c;
        if(c=='0'||c=='1')
            continue;
        else {t=c-'0';
        s1+=s[t];
        }

    }
    sort(s1.begin(),s1.end());
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}
