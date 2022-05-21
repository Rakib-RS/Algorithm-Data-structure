#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[] ={4,3,2,3,5,2,1};
    int n =7;
    int i,j,sum=0,ct = 0,l,r,target;
    for(i = 0 ;i<n;i++){
        sum += nums[i];
    }
    target = sum/4;
    sort(nums,nums+n);
    
    return 0;
}