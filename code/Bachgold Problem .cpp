#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,i,j;
    cin>>a;
    if(a%2==0)
        {j=a/2;c=a/2;}
    else {c=a/2-1;j=a/2;}
    cout<<j<<endl;
    for(i=1;i<=c;i++){
        if(i<c)
        cout<<"2"<<" ";
        if(a%2==0&&i==c)cout<<"2"<<endl;
        if(a%2!=0&&i==c)cout<<"2"<<" "<<"3"<<endl;
    }
    if(a==3)cout<<"3"<<endl;
    return 0;
}

