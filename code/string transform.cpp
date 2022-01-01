#include<bits/stdc++.h>
using namespace std;
int main(){

    string s="Rakib";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

    return 0;
}
