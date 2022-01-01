#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t,n,r,i,j,ma,d,x[2000],p;
    cin>>t;
    while(t--){
        cin>>n>>r>>p;
        d=0;ma=0;
        for(i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x,x+n);ma=x[0]-p;
        for(i=0;i<n;i++){
            d=x[i]-x[i-1];
            ma=max(ma,d-p);

        }
        d=r-x[n-1];
        ma=max(ma,d-p);
        cout<<ma<<endl;

    }

    return 0;
}
