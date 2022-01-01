#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,j,a[1000],s;
    double s1;
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    for(i=n-1;i>=0;i--){
        s=sqrt(a[i]);
        s1=sqrt(a[i]);
        if(s-s1!=0)
            break;
    }
    cout<<a[i]<<endl;

    return 0;
}
