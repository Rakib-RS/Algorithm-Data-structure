#include<iostream>
using namespace std;
int main(){
int a[] ={10,2,3};
int* t;
t = a;
for(int i =0;i<3;i++){
    cout<<t[i]<<" ";
}
a[0] =11;
for(int i =0;i<3;i++){
    cout<<t[i]<<" ";
}
return 0;
}
