#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int p,r,i,n,c=1,j;
    cin>>p>>n;j=p;
    for(i=1;;i++){
        p=j*i;
        r=p%10;
        if(r==n||r==0)
            break;
        c++;
    }
    cout<<c<<endl;

    return 0;
}
