#include<bits/stdc++.h>
using namespace std;
int main(){

    map<int,int>mp;
    mp[-1]=5;
    mp[-2]=10;
    int s,v;
    map<int,int>::iterator it;
    it=mp.begin();
    s=it->first;
    v=it->second;
    cout<<s<<endl;
    cout<<v<<endl;
    mp.erase(it);
    cout<<mp.size()<<endl;
    it=mp.begin();
    //it--;
    s=it->first;
    v=it->second;
    cout<<s<<endl;
    cout<<v<<endl;

    return 0;
}
