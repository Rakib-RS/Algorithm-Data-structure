#include<bits/stdc++.h>
using namespace std;
    int a[1000000];
int main(){

    long long int n,i,j=0,,c=0,d1,d2;
    cin>>n;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            d1=n/i;
            a[j++]=i;
            if(d1!=i)
                a[j++]=d1;
        }
    }
    for(i=0;i<j;i++){
        if
    }

    return 0;
}
