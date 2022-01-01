#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t,a,b;
   cin>>t;
   while(t--){
    cin>>a>>b;
    if(b>0){
            if(a%b==0)
        cout<<":wink:"<<endl;
        else cout<<":kick:"<<endl;
    }
    else cout<<":kick:"<<endl;
   }
    return 0;
}
