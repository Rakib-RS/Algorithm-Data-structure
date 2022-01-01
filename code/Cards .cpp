#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a[100],sum=0,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/(n/2);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<i+1<<" "<<j+1<<endl;
                a[j]=0;
                break;
            }
        }
    }
    return 0;
}
