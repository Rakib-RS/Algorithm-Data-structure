#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int sum=0,n,a[100000],b[100000],c,i,j=0,k=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>c;
        if(c%2!=0)
            a[j++]=c;
        else sum+=c;
    }
    sort(a,a+j);
    if(j%2!=0)a[0]=0;
    for(i=0;i<j;i++)
        sum+=a[i];
    cout<<sum<<endl;


    return 0;
}
