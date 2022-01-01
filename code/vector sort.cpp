#include<bits/stdc++.h>
using namespace std;
int main(){
     int t,tc=1,i,j,n,c,a,s,d,c1,c2,c3;
     vector<int>vc;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            vc.push_back(a);
        }
        sort(vc.begin(),vc.end());s=5;
        vector<int>::iterator h2,h1;
            h2=lower_bound(vc.begin(),vc.end(),s);
            cout<<(h2-vc.begin())<<endl;
            c2=h2-vc.begin();
            cout<<vc[c2]<<endl;
            vc.clear();
    }
}
