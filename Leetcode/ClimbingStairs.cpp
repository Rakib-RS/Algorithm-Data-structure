#include<bits/stdc++.h>
using namespace std;
int climbing(int n,int mem[]){
    if(n==0) return 1;
    if(n<0) return 0;
    if(mem[n]) return mem[n];
    mem[n] =  climbing(n-1,mem)+ climbing(n-2,mem);
    return mem[n];
}
int main(){
    int n;
    n = 100;
    int mem[n+1] ={0};
    cout<<climbing(n,mem)<<endl;
   // cout<<climbing(0)<<endl;
    return 0;
}