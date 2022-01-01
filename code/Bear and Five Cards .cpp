#include<bits/stdc++.h>
using namespace std;
int main(){

    int t[1000]={0},a[1000],i,j=0,c[5]={0},k=0,f=1;
    for(i=0;i<5;i++){
        cin>>a[i];
        j+=a[i];
        t[a[i]]++;
    }
    sort(a,a+5);
    c[0]=0;c[1]=0;
    for(i=4;i>=0;i--){
        if(t[a[i]]>=2){
                if(t[a[i]]==2)
                    c[k++]=a[i]+a[i];
            else c[k++]=a[i]+a[i]+a[i];
            f=0;

        }
    }
    sort(c,c+k);
    if(f)c[k-1]=0;
    j-=c[k-1];
    cout<<j<<endl;

    return 0;
}
