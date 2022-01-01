#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vc;
    vc.push_back(0);
    int ar[]={-5,-5,-5},i;
    vector<int>::iterator it1,it2;
    it1=vc.begin();
    vc.insert(it1,ar,ar+3);
    it1=vc.begin();
    vc.assign(ar,ar+3);
    for(i=0;i<vc.size();i++)
        cout<<vc[i]<<endl;
    vc.erase(vc.begin(),vc.begin()+2);
    return 0;
}

