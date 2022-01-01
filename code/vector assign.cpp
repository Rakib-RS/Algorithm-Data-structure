#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<bool> vc;
    vc.assign(10,false);
    //cout<<vc[1]<<endl;
    //vc[1]=true;
    //cout<<vc[1]<<endl;
    cout<<vc[2]<<endl;
    set<int>st;
    set<int>::iterator it;
    st.insert(3);
    it=st.begin();
    cout<<vc[*it]<<endl;

    return 0;
}
