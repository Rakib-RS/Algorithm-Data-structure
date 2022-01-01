#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,m,k,i,j,c1=0,c=0,a=0,ans=0,c2=0;string s[2000];
    cin>>n>>m>>k;getchar();
    for(i=1;i<=n;i++){
            cin>>s[i];c=0;
        for(j=0;j<m;j++){
            if(s[i][j]=='*')
                c=0;
            else {c++;c2++;
                if(c==k) c1++;
                c=1;
            }
        }
    }
    c=0;
    for(i=0;i<m;i++){ c=0;
        for(j=1;j<=n;j++){
            if(s[j][i]=='*')
                c=0;
            else {c++;
                if(c==k) c1++;
                c=1;
            }
        }
    }
    if(k==1) c1=1;
    cout<<c1<<endl;
    return 0;
}
