#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    int i,j,k,t=1,q,d;
    while(cin>>s1){
        printf("Case %d:\n",t++);
        cin>>q;
        while(q--){
            cin>>i>>j;d=1;
            for(k=min(i,j)+1;k<=max(i,j);k++){
                if(s1[k]!=s1[k-1]){
                    d=0;
                    break;
                }
            }
            if(d)
                printf("Yes\n");
            else printf("No\n");
        }
    }

    return 0;
}
