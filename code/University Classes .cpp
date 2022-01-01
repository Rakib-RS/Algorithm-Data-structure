#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,j,m,k,c=0;
    string s[10000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i];k=0;
    for(i=0;i<=6;i++){
        c=0;
        for(j=0;j<n;j++){
            if(s[j][i]=='1')
                c++;

        }
        k=max(k,c);
    }
    cout<<k<<endl;

    return 0;
}
