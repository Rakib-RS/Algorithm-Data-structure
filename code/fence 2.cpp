#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,i,j,s=0,m,mi,in,f;
    cin>>n>>k;
    long long int a[n+5];
    j=0;in=1;mi=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        f=a[j];
        if(i<k){
            s+=a[i];
        }
        if(i==k-1) mi=s;
        if(i>=k){
            s+=a[i]-f;
                j++;
            if(s<mi){
                mi=s;
                in=j+1;
            }
        }

    }

    cout<<in<<endl;

    return 0;
}

