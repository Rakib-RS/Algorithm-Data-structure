#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
bool combination(int arr[],int n,int sum,vector<int>v,int index){
    if(sum == 0){
        ans.push_back(v);
        return true;
    }
    if(sum<0) return false;
   if(index == n) return false;
   combination(arr,n,sum,v,index+1);
   v.push_back(arr[index]);
   combination(arr,n,sum-arr[index],v,index);
   v.pop_back();
    return false;
}
int main(){
    int arr[] ={2,3,5};
    int sum = 12;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    combination(arr,n,sum,v,0);
    for(int i =0;i<ans.size();i++){
        for(int j  =0 ;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}