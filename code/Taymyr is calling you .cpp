#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,i,j,m=0,k,l;
    cin>>a>>b>>c;
        k=a;l=b;
    for(i=b;i<=c;i+=l){
        if(i%a==0)
            m++;
    }
    cout<<m<<endl;

    return 0;
}
