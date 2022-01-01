#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,n,mx=0;
    cin>>n;
    while(n--){
        cin>>a;
        mx=max(mx,a);
    }
    mx-=25;
    if(mx<0)mx=0;
    cout<<mx<<endl;
    return 0;
}
