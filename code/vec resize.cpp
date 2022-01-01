#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vc;
    int i;
    for(i=0;i<10;i++)
        vc.push_back(i);
    int mx=*max_element(vc.begin(),vc.end());
    cout<<mx<<endl;
    vector<int>::iterator it;
    it=vc.begin();
    vc.erase(it);
     vc.resize(5);
     for(i=0;i<vc.size();i++)
        cout<<vc[i]<<endl;
    return 0;
}
