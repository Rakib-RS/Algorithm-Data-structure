#include<bits/stdc++.h>
using namespace std;
int bigmod(int a,int b,int m){
    if(b==0) return 1%m;
    int x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;

}
int main(){
    int a,b,m,j;
    cin>>a>>b>>m;
    j=bigmod(a,b,m);
    cout<<j<<endl;
    return 0;
}
