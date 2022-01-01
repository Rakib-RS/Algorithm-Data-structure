#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,m,i,j;
    cin>>a>>b;
    m=a*b;
    c=m/5;
    if((a%2==0&&b%2==0)&&(a%b!=0&&b%a!=0)&&(m%5==2||m%5==1)||m%5==4){c++;
    }
    cout<<c<<endl;
    return 0;
}
