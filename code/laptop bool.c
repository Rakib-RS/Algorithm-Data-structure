#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,c=0,b,a,i,m;
    cin>>n;
    bool j=0;
    for(i=0;i<n;i++){
            cin>>a>>b;
       if(a!=b){
        j=1;
       }
    m=max(m,b);

    }
    if(j)
    cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;

    return 0;
}

