#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[200005],d=0,s=0,c=0,j=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
            s=a[i];
            if(c){
                s=a[i]-1;
                if(s<0) j=0;
            }
        if(s%2!=0){
            c=1;
        }
        else {
            c=0;
            s=0;
        }
    }
    if(s) j=0;
    if(j)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    return 0;
}
