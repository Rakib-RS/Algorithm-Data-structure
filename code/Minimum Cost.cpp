#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t,n,a[200000],i,m,mx,s;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
                cin>>a[i];
            if(i==0){
                m=a[i];
            }
            m=min(m,a[i]);
        }
        s=0;
        for(i=0;i<n;i++){
            s+=a[i]-m;
        }
        cout<<s<<endl;

    }
    return 0;
}
