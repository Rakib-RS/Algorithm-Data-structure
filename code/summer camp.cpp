#include <bits/stdc++.h>
using namespace std;
    int n,i;
    string s1;
int main() {
    cin >> n;
    for (i = 1; i <= n; i++) {
        ostringstream s;
       s<<i;
       s1+=s.str();
    }
    cout << s1[n - 1];
    return 0;
}
