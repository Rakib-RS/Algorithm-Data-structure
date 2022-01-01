#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l,m,n,a,b=0;
    cin>>n;
    for(i=0;i<n+1;i++){
        a=i-1;
        for(j=0;j<=n*2-i*2-1;j++){
                cout<<" ";
        }
        for(k=0;k<=i;k++){
            if(i>0)
            cout<<k<<" ";
          else cout<<k<<endl;
        }
        for(l=0;l<i;l++,a--){
            if(l<i-1)
            cout<<a<<" ";
            else cout<<a<<endl;
        }
    }
    for(i=0;i<n;i++){
            b+=2;
        for(j=0;j<=b-1;j++){
            cout<<" ";
        }
        for(k=0;k<n-i;k++){
                if(i<n-1)
               cout<<k<<" ";
               else cout<<k<<endl;
        }a=k-2;
        for(l=0;l<n-1;l++,a--){
            if(a<0) break;
            if(a>0)
            cout<<a<<" ";
            else cout<<a<<endl;
        }
    }

    return 0;
}
