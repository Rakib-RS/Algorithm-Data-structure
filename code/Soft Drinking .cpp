#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,l,c,d,p,nl,np,a1,b1,c1,mn,f;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a1=(k*l)/nl;
    b1=c*d;
    c1=p/np;
    mn=min(a1,b1);
    mn=min(mn,c1);
    f=mn/n;
    cout<<f<<endl;
    return 0;
}
