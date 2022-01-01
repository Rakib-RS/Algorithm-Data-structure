#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,m,a[100],c=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(m>a[i]) c=c+2;
        else break;
    }
    if(m==0&&n==1) cout<<1<<endl;
    else cout<<c<<endl;
    return 0;
}
