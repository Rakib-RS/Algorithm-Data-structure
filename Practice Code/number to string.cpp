#include<iostream>
using namespace std;
int main(){
    string s;
    int a = 5;
    s = "";


    char str[10];
    sprintf(str, "%d", a);
    cout<<str<<endl;
    s += a +'0';
    cout<<s<<endl;
    int b;
    sscanf(str, "%d", &b);
    cout<<b<<endl;
    b = s[0] - '0';
     cout<<b<<endl;
    return 0;
}

