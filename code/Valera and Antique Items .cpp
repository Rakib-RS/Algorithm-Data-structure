#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,v,c,i,j,b,k,m;
    vector<int>vc;
    cin>>n>>v;
    for(i=1;i<=n;i++){
        cin>>b;c=0;
        for(j=1;j<=b;j++){
            cin>>k;
            if(k<v&&c!=1){
                vc.push_back(i);
                c=1;
            }
        }
    }
    sort(vc.begin(),vc.end());
    cout<<vc.size()<<endl;
    for(i=0;i<vc.size();i++){
        if(i<vc.size()-1)
            cout<<vc[i]<<" ";
        else cout<<vc[i]<<endl;
    }

    return 0;
}
