#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long n=bitset<32>(s).to_ulong();
    cout<<n<<endl;
    n=5;
    s=bitset<32>(n).to_string();
    cout<<s<<endl;
    return 0;
}
