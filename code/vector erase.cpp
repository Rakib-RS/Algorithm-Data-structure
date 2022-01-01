#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vc;
    vc.push_back(1);
    vc.push_back(2);
    vc.push_back(3);
    int *p;
    vector<int>::iterator it,it1;
    it=vc.begin();
    it1=vc.begin();
    //vc.erase(it+2);
    vc.erase(vc.begin()+1);
    for(int i=0;i<vc.size();i++)
        cout<<vc[i]<<endl;
    return 0;
}
