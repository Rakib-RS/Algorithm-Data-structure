#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,mi=0,ma=0,j;
    cin>>n>>k;
    if(k==0){
        mi=0;ma=0;
    }
    else if(n==1){
        mi=0;ma=0;
    }
    else if(n==k||n==k-1){
            mi=0;ma=0;
    }
    else {
        mi=1;
        if(k<n/2){
            ma=k*2;
            if(ma+k>n){
            j=ma+k;
            ma=ma-(j-n);
            }
        }
        else if(2*k+1<=n) ma=k+1;
        else if(2*k<=n) ma=k;
        else ma=n-k;
    }
    cout<<mi<<" "<<ma<<endl;
    return 0;
}
