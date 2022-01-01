#include<bits/stdc++.h>
using namespace std;
int main(){
    int s=5;
    vector<int>vc;
    for(int i=1;i<=10;i++)
        vc.push_back(i);
    vector<int>::iterator l;
    l=lower_bound(vc.begin(),vc.end(),5);
    s=l-vc.begin();
    cout<<vc[s]<<endl;
    cout<<s<<endl;




    return 0;
}
