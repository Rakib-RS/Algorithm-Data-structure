#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vc;
    int i,j,a;
    for(i=5;i>=1;i--){
            //cin>>a;
        vc.push_back(i);
    }
    sort(vc.begin(),vc.end());
    for(i=0;i<vc.size();i++){
        cout<<vc[i]<<endl;
    }
    vector<int>::iterator it1,it2;
    int ar[4]={-5,-5,-5,-5};
    vc.insert(vc.begin()+1,ar,ar+3);
    for(i=0;i<vc.size();i++){
        cout<<vc[i]<<endl;
    }
}
