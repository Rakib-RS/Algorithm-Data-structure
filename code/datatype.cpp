#include<iostream>
using namespace std;
int main(){
    int l,h,n,s,b,q,i,mid;
    cin>>n;
    int a[n+1];
    for(i=1;i<=5;i++)
        cin>>a[i];
        l=1;
        h=n;
    cin>>q;
    while(l<=h){
        mid =(l+h)/2;
        if(a[mid]>=q){
            h= mid;
        }
        else{
            l=mid;
        }

    }
    cout<<l<<" "<<h<<endl;
    return 0;
}
