#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a[1000],c=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1;i<n;i++){
        if(a[i]!=a[i-1])
            c++;
    }
    cout<<c<<endl;





    return 0;
}
