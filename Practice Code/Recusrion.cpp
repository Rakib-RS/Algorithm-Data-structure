#include<iostream>
using namespace std;
void recursion(int i,int j){
    if(i == 0 || j==0) return;
    int a = i;
    int b = j;
    recursion(i-1,j-1);
    cout<<"a "<<i<<" b "<<j<<endl;
}
int main(){
    recursion(5,10);

    return 0;
}