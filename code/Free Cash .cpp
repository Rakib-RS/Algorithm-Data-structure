#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a[2],b[2],c=1,i,j=1;
    cin>>n;
    for(i=0;i<n;i++){
        if(i%2==0)
            cin>>a[0]>>b[0];
        else cin>>a[1]>>b[1];
        if(a[0]==a[1]&&b[0]==b[1])
            c++;
        else c=1;
        j=max(c,j);
    }
    cout<<j<<endl;

 return 0;
}
