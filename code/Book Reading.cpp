#include<bits/stdc++.h>
using namespace std;
long long int ar[4000000];
int main(){
    long long int a,b,n,i,j,c=1,s=0;
        cin>>a>>b;
    for(i=0;i<a;i++){
        cin>>ar[i];
        s+=86400-ar[i];
        if(s<b)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
