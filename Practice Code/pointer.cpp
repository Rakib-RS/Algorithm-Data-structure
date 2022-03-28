#include <iostream>
using namespace std;

int main(){
    int a, *p;
    a = 5;
    p = &a;
    a = 10;
    *p = 105;
    a = 100;
    cout<<a<<endl;// print a= ?
    cout<<*p<<endl;//print update a
    cout<<&a<<endl;//adreess of a;
    cout<<p<<endl;//address of a
    cout<<&p<<endl;//adress of p;
    cout<<*(&p)<<endl;//address of a'
    return 0;
}