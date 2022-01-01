#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>mp;
    int i,a;
    string s;
    for(i=1;i<=5;i++){
        cin>>s>>a;
        mp[s]=a;
        cout<<mp[s]<<endl;
    }


}

