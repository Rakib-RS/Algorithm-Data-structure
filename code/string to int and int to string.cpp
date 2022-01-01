#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    int a=100;
   ostringstream s;
        s<<a;
       s1= s.str();
       cout<<s1<<endl;
       stringstream ss(s1);
       ss>>a;
       cout<<a<<endl;
       s1="+"+s1;
       cout<<s1<<endl;
}
