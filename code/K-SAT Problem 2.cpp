#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,k,i,j,k,t,b,p,test=1;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int a[m+1]={0};
        while(n--){
            for(i=1;i<=k;i++){
                cin>>b;
                p=abs(b);
                a[p]+=b;
            }
        }
        string s,s1;
        getchar();
        getline(cin,s);
    }
    return 0;
}
