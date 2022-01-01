#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,i,c=0,s;;
    cin>>k;
    for(i=19;;i=i+9){
        n=i;s=0;
        while(n){
            s+=n%10;
            n/=10;
        }
        if(s==10)c++;
        if(c==k)
            break;
    }
    cout<<i<<endl;

    return 0;
}
