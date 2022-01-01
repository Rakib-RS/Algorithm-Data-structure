#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,i,j,c=0,a[10000],b[10000]={0},s=0,l=0;
    int m[10000];
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>a[i];
         b[i]=a[i];
    }
    sort(a+1,a+n+1);j=0;
    for(i=1;i<=n;i++){
        s+=a[i];
        if(s<=k){
            c++;
            for(l=1;l<=n;l++){
                if(a[i]==b[l]){
                    m[j++]=l;
                    b[l]=0;
                }
            }
        }
        else break;
    }
    sort(m,m+c);
    cout<<c<<endl;
    for(i=0;i<c;i++){
        if(i<c-1)cout<<m[i]<<" ";
        else cout<<m[i]<<endl;
    }

    return 0;
}
