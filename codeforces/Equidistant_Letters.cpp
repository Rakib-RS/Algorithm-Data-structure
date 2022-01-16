#include<iostream>
using namespace std;
int main(){
    int t;
    string s,s2;
    int i,j,k;
    int a[40]={0};
    cin>>t;
    s = "abc";
   for(i = 0;i<s.size();i++){
       j = s[i]-97;
       a[j]++;
   }
   k =100;
   

    return 0;
}