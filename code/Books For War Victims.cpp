#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,d;
    cin>>n;
    d=n/3;
    if(n%3!=0)
        d++;
    cout<<d<<endl;
    return 0;
}
