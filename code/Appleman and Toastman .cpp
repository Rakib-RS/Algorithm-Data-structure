#include<bits/stdc++.h>
using namespace std;
long long int b[5000000];
int main(){
    long long int n,a,i,j,k,s=0,sum,l;
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%lld",&b[i]);
        s+=b[i];
    }
    if(n==1)cout<<s<<endl;
    else{
    l=s;
    sort(b,b+n);j=0;k=0;n-=2;
    while(n--){
            s=s-b[k++];
        j+=s;
    }
    sum=l*2+j;
    cout<<sum<<endl;
    }


    return 0;
}
