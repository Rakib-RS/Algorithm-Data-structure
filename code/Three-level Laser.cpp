#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vc;
    int n,d,i,j,ma=0,k;
    double e,mx=-1;
    cin>>n>>d;
    for(i=0;i<n;i++){
        cin>>j;
        vc.push_back(j);
    }
    vector<int>::iterator it;
    for(i=n-1;i>=0;i--){
        j=vc[i];
        j=j-d;
        it=lower_bound(vc.begin(),vc.end(),j);
        k=it-vc.begin();
        e=-1;
        if((vc[i]-vc[k]<=d)&&(vc[i]-vc[k]>0)&&(k<i)){
                e=(vc[i]-vc[k+1])/(vc[i]-vc[k]*1.0);
                cout<<e<<endl;
        }
        if(e>=0)
        mx=max(mx,e);

    }
    if(mx>=0)
    cout<<mx<<endl;
    else cout<<"-1\n";
    return 0;
}
