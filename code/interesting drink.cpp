#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a[200000],q,m,i,j,k,d=0,b;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>q;
    sort(a+1,a+n+1);
    while(q--){
        cin>>m;
        j=n;d=0;k=0;
        b=j/2;
            if(a[b]>m){
                b=b/2;
            }
            else if(a[b]<m){
                b=j/3;
            }
        if(a[b]>m){
            while(b){
                b--;
                if(a[b]<=m){k=1;
                break;
                }
            }
            }
        else if(a[b]<m){
                while(b<n){
                    b++;
                    if(a[b]>m){
                            b--;
                        break;
                    }
                }
            }

         cout<<b<<endl;
    }


}
