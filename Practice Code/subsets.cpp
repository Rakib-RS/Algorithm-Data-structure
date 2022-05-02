#include<bits/stdc++.h>
using namespace std;
void sets(vector<vector<int>>&ans,vector<int>ds,vector<int>arr,int n,int i){
    if(i==n){
        ans.push_back(ds);
        return;
    }
     ds.push_back(arr[i]);
    sets(ans,ds,arr , n, i+1);
    ds.pop_back();
    sets(ans,ds,arr,n , i+1);
}
int main(){
    vector<int>nums;
    int i,j,n;
    cin>>n;
    while(n--){
        cin>>j;
        nums.push_back(j);
    }
    vector<int>v;
    vector<vector<int>>ans;
    sets(ans,v,nums,nums.size(),0);
    for(i =0 ;i<ans.size();i++){
        for(j =0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"ok"<<endl;

    
    return 0;
}