#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a[1000],b,mi=0,i,j=1;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(k%a[i]==0){
            b=k/a[i];
            if(j==1){
                mi=b;j=0;
            }
            mi=min(b,mi);

        }

    }
    cout<<mi<<endl;
    return 0;
}
