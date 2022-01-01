#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,i,j,t;
    cin>>t;
    c=0;string s;
    while(t--){
        cin>>s>>a>>b;
        if(a>=2400&&b>a)
            c=1;
    }
    if(c)printf("YES\n");
    else printf("NO\n");
    return 0;


}
