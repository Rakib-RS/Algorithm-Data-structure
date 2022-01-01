#include<bits/stdc++.h>
using namespace std;
struct data{
    int x;
    int y;

}arr[100100];
bool cmp(data a,data b){
    if(a.y<b.y) return 1;
    else return 0;

}

int main(){
    int t,n,a,b,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        j=0;
        for(i=0;i<n;i++){
            cin>>a>>b;
            arr[i].x=a;
            arr[i].y=b;
        }
        sort(arr,arr+n,cmp);
        /* for(i=0;i<n;i++){
            cout<<arr[i].x<<" ";
            cout<<arr[i].y<<endl;;
        }*/
        int count =1;
        b=arr[0].y;
        for(i=1;i<n;i++){
            if(b<=arr[i].x){
                b=arr[i].y;
                count++;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}
