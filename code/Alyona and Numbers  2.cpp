#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,m,i,j;
    cin>>a>>b;
    m=a*b;
    c=m/5;
    if((a+b)%5==0)c++;
    cout<<c<<endl;
    return 0;
}

