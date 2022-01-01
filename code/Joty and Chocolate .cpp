#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,a,b,p,q,s,s1,s2,j=1,s3;
    cin>>n>>a>>b>>p>>q;
    s1=(n/a);
    s2=n/b;
    if(a%b==0&&b>1){
        if(p>=q)
            s2--;
        else s1--;j=0;
    }
    if(b%a==0&&j==1&&a>1){
        if(p>=q)
            s2--;
        else s1--;
    }
    s=s1*p+s2*q;
    s2=(n/(a*b));
    s3=min(p,q);
    s=s-s3*s2;
    if(a==b)
    {
        s=n/a;
        s=max(p,q)*s;
    }
    cout<<s<<endl;

    return 0;
}
