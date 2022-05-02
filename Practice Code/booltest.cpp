#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = -1;
    vector<vector<int>>nums;
    vector<int>v;
    v.push_back(1);
     v.push_back(12);
      v.push_back(12);
    nums.push_back(v);
    cout<<nums.size()<<endl;
    int j = nums.size();
    if((int)(nums.size())<-1)cout<<"ok"<<endl;
    return 0;
}