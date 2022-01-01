#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,i,j,s,s1,c=0;
    cin>>n>>m;
    s=sqrt(n+1);
    s1=sqrt(m+1);
    for(i=0;i<=s;i++){
            for(j=0;j<=s1;j++){
                if(i*i+j==n&&i+j*j==m)
                    c++;
            }

    }
    cout<<c<<endl;

    return 0;
}
