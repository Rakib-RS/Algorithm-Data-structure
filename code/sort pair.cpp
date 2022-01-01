#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.second < b.second) return true;
    else if(a.second == b.second) {
    if(a.first < b.first) return true;
    else return false;
  }
  return false;
}
int main(){
    vector<pii>vc,vect;
    vc.push_back({1,4});
    vc.push_back({2,6});
    vc.push_back({0,4});
    sort(vc.begin(), vc.end(), sortbysec);
    for(int i=0;i<3;i++)
        cout<<vc[i].first<<" "<<vc[i].second<<endl;

    return 0;
}
