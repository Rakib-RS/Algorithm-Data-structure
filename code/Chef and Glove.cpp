#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a[120000],i,j,f=0,b,k;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>a[i];
        j=n;f=1;b=1;
        for(i=1;i<=n;i++){
            scanf("%d",&k);
            if(k<a[i])
                f=0;
            if(k<a[j--])
                b=0;
        }
        if(f==1&&b==1)
            cout<<"both\n";
        else if(f)
            cout<<"front"<<endl;
        else if(b)
            cout<<"back"<<endl;
        else cout<<"none"<<endl;
    }
    return 0;
}
