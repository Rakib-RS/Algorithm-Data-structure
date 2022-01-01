#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,c=0,a;
    string s;
    cin>>t;
    for(j=1;j<=t;j++){
        cin>>a>>s;c=0;
        for(i=0;i<a;i++){
            if(s[i]=='.'){
                c++;
                i+=2;
            }
        }
        printf("Case %d: %d\n",j,c);
    }

    return 0;
}
