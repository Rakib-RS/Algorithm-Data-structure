#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    set<int>::iterator it;
    st.insert(8);
    st.insert(3);
    st.insert(4);
    st.insert(2);
    st.insert(3);
   // st.clear();
   cout<<st.size()<<endl;
    int a;
    for(it=st.begin();it!=st.end();it++){
        a=*it;
        cout<<a<<endl;
    }
    return 0;
}
