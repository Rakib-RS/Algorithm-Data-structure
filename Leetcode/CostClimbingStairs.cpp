#include<bits/stdc++.h>
using namespace std;
int climbing(int cost[],int n,int index ,int mem[]){
    if(index>= n) return 0;
    if(mem[index]) return mem[index];
    mem[index] = min(climbing(cost,n,index+1,mem),climbing(cost,n,index+2,mem))+ cost[index];
    return mem[index];
}
int main(){
   int cost [] = {1,100,1,1,1,100,1,1,100,1};
   int mem[1005] ={0};
   int n= 10;
    cout<<climbing(cost,n,0, mem)<<endl;
    for(int i =0;i<=n;i++){
        cout<<mem[i]<<" ";
    }
   // cout<<climbing(0)<<endl;
    return 0;
}