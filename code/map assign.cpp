#include<bits/stdc++.h>
using namespace std;
map<int,int>m[10],mp;
int main(){
    mp[3]++;
    mp[4]++;
    m[1]=mp;
    cout<<m[1].size()<<endl;
    return 0;
}
