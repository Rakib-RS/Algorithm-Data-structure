#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    n=500;
    cout<<n<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1&&j==1)
                cout<<"1"<<" ";
            else if(i==1&&j==3)
                cout<<"1";
           else  if(i==3&&j==1)
                cout<<"1 ";
           else if(i==3&&j==3)
                cout<<"1";
            else if(i==2&&j==3)
                cout<<"0";
            else cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}
