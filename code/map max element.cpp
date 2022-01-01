#include<bits/stdc++.h>
using namespace std;
int main() {
   map<int, int> m,mp;
    m[1] = 100;
    m[2] = 100;
    m[3]=-1;
    mp=m;
    map<int,int>::iterator it;
     it=max_element(m.begin(),m.end(),m.value_comp());
    cout<<it->first<<endl;
    /*int maxn,x;
        map<int ,int>::iterator it;
     maxn = max_element(m.begin(), m.end(), m.value_comp())->second;
     cout<<maxn<<endl;
      x = std::max_element(m.begin(), m.end(),
    [](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; });
    /*int max;
        auto max=get_max(m);/*
    //int x;
    //auto x = std::max_element(m.begin(), m.end(), m.value_comp());
    map<int ,int>::iterator it;
    it=max_element(m.begin(),m.end(),m.value_comp());

   cout << it->first << " : " << it->second << endl;*/
  // map<char,int> x = { { 'a',1 },{ 'b',2 },{'c',0}};
    //auto max=get_max(x);
    //cout << max.first << "=>" << max.second << std::endl;
}
