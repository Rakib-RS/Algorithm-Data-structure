#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,i,j,s=0,m,mi,in,f;
    cin>>n>>k;
    long long int a[n+5];
    j=0;in=1;mi=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(i==0)f=a[i];
        if(i<k){
            mi+=a[i];
        }

    }
    j=1;
    for(i=k;i<n;i++){
        s+=a[i]-f;
        if(s<mi){
            mi=s;
            in=j+1;;
        }
        f=a[j];
        j++;
    }

    cout<<in<<endl;

    return 0;
}
