#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,s=0,i,j,c=0;
    cin>>a>>b;
    for(i=0;i<a;i++){
        cin>>j;
        s+=j;
    }
    s=abs(s);
    while(s){
        c+=s/b;
        s=s%b;
        b--;
    }
    cout<<c<<endl;
    return 0;
}
