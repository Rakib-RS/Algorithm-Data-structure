#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
bool combination(int arr[],int n,int sum,vector<int>v,int index,int k){
    if(sum == 0 && v.size() == k){
        ans.push_back(v);
        return true;
    }
    if(sum<0) return false;
   if(index == n) return false;
   if(v.size()==k) return false;
   
   v.push_back(arr[index]);
   combination(arr,n,sum-arr[index],v,index+1,k);
   v.pop_back();
   while(index+1<n && (arr[index]== arr[index+1]))index++;
   combination(arr,n,sum,v,index+1,k);
    return false;
}
int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9};
    int sum = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    vector<int>v;
    int k =4;
    combination(arr,n,sum,v,0,k);
    for(int i =0;i<ans.size();i++){
        for(int j  =0 ;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}