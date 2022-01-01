#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,d;
    cin>>a>>b;
    d=b-a;
    if(a==0&&b==0)
        cout<<"NO"<<endl;
   else if(d==0||d==1||d==-1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
