#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,i,j,k,l,ma=0,c,s=0;
    cin>>n>>d;
    char ch[1000];
    for(i=1;i<=d;i++){
            l=0;
        for(j=1;j<=n;j++){
            cin>>ch[j];
            if(ch[j]=='0'&&l!=1){
                l=1;
            }
        }
        if(l==0)
            s=0;
        else s++;
        ma=max(ma,s);
    }
    cout<<ma<<endl;

    return 0;
}
