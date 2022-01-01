#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,x,y,z,sa,sb,s1,s2;
    cin>>a>>b>>x>>y>>z;
    sa=x*2+y;
    sb=y+3*z;
    s1=sa-a;
    s2=sb-b;
    if(s1<0)s1=0;
    if(s2<0)s2=0;
    s1+=s2;
    cout<<s1<<endl;

    return 0;
}
