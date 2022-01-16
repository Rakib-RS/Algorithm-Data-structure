#include<iostream>
using namespace std;
int com[100][100],ind=0;
void combination(int arr[],int data[],int start,int end,int index,int r){
    if(r==index){
        for(int i = 0;i<r;i++){
            com[ind][i] = data[i]; 
        }
        ind++;
        return ;
    }
    for(int i = start;i<=end && end-i+1>=r-index;i++){
        data[index] = arr[i];
        combination(arr,data,i+1,end,index+1,r);
        while(arr[i]==arr[i+1]){
            i++;
        }
    }
}
int main(){
    int arr[] ={1,2,1,1,2,4,5,6,7},i,n,r,j,temp;
    n = sizeof(arr)/sizeof(arr[0]);
    for(i = 0;i<n;i++){
        for(j =i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    r = 2;
    int data[r];
    combination(arr,data,0,n-1,0,r);
    for(i =0 ;i<ind;i++){
        for(j = 0;j<r;j++){
            cout<<com[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}