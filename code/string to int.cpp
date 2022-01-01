#include<bits/stdc++.h>
using namespace std;
int main(){
//atoi(string_object_name.c_str())
 string s = "12345";

    // object from the class stringstream
    stringstream geek(s);

    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    geek >> x;
    cout<<x<<endl;
}
