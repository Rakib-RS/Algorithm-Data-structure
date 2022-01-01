#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,j,k=0;
    string s1,s2;
    cin>>s1;
    s2=s1;
    reverse(s2.begin(),s2.end());
    a=atoll(s1.c_str());
    b=atoll(s2.c_str());
    if(a%b==0){j=a/b;
        if(j==1||j==10||j==100||j==1000||j==10000||j==100000||j==1000000||j==10000000||j==100000000||j==1000000000)
            k=1;
    }
    if(s1==s2||k==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
