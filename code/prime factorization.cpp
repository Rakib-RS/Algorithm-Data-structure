#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,a[100],k=0,p;
    cin>>n;
    while(n%2==0){
            n=n/2;
        }
        j=3;k=0;p=1;
        while(j*j<=n){
            if(n%j==0){
                n/=j;
                k++;
            }
            else{
                j+=2;
                p=p*(k+1);
                k=0;
            }
        }
    return 0;
}
