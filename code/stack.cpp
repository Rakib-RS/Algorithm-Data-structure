#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    int i;
    for(i=1;i<=6;i++)
        s.push(i);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}
