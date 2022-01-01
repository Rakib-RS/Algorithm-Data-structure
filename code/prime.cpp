#include<bits/stdc++.h>
using namespace std;
    long long int a[10];
int main(){
    long long int j=0,n=1,i,s,k=0,d;

    for(i=47;i<=47;i++){
            cout<<i<<endl;
        s=sqrt(i);d=1;cout<<s<<endl;
        for(j=2;j<=s;j++){
            cout<<j<<endl;
            if(i%j==0){
                d=0;break;
            }
        }
        cout<<d<<endl;
        if(d)a[k++]=i;
    }
    for(j=0;j<k;j++)
        cout<<a[k]<<endl;
    return 0;

}
