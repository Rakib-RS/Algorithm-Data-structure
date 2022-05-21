#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
vector<vector<int>> getSum(int arr[],int n,int target,vector<vector<int>>ans){
    if(target == 0) return true;
    if(target<0) return false;
    for(int i  = 0;i<n;i++){
        int reminder = target - arr[i];
        if(getSum(arr,n,reminder)== true) return true;
    }
  

}
int main(){
    int arr[] = {2,3,5};
    int target = 13;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<getSum(arr,n,target);
    return 0;
}