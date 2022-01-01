#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a[100000],i,j,b[100000],k=1,c;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++){
            c=1;
        for(j=1;j<=n;j++){
            if(a[i]<a[j])
                c++;
        }
        b[i]=c;
    }
    for(i=1;i<=n;i++){
        if(i<n)cout<<b[i]<<" ";
        else cout<<b[i]<<endl;
    }
    return 0;

}
