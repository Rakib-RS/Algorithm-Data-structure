#include<bits/stdc++.h>
using namespace std;
int main(){
    int s=0,n,a;
    cin>>n;
    while(n--){
    cin>>a;
    s=s^a;
    }
    cout<<s<<endl;
    return 0;
}

