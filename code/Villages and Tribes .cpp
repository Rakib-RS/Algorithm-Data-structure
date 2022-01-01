#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,i,j,c,a,b,k,l;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        a=0;j=0;c=0;
        b=0;
        for(i=0;i<s.size();i++){
            if(j==1&&s[i]=='A'){
                a+=i-k;k=i;
            }
            if(c==1&&s[i]=='B'){
                b+=i-l;l=i;
            }
            if(s[i]=='A'&&j==0){
                j=1;
                a++;k=i;c=0;
            }
            if(s[i]=='B'&&c==0){
                c=1;
                b++;j=0;l=i;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
