#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,d,l,m;
    cin>>n;
    k=n/2+1;d=1;
    for(i=1;i<=k;i++){
        for(j=i;j<k;j++){
                cout<<"*";
        }
        for(l=1;l<=d;l++){
                cout<<"D";
        }
        for(m=i;m<k;m++){
                if(m<k-1)
                cout<<"*";
                else cout<<"*"<<endl;
        }
        d=d+2;
    }
    cout<<endl;
    d=n-2;
     for(i=1;i<k;i++){
        for(j=1;j<=i;j++){
                cout<<"*";
        }
        for(l=1;l<=d;l++){
                cout<<"D";
        }
        for(m=1;m<=i;m++){
                if(m<i)
                cout<<"*";
                else cout<<"*"<<endl;
        }
        d=d-2;
    }

    return 0;
}
