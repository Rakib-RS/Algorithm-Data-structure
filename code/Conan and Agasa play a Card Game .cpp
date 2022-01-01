#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a[200000],i,j=1;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=n-1;i>=0;i--){
        if(a[i]>a[i-1])
            break;
        if(i>0&&a[i]>=a[i-1])
            j++;
    }
    if(j%2==0)
    printf("Agasa\n");
    else printf("Conan\n");

    return 0;
}
