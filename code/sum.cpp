#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10,a[n],i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n-1];


}
