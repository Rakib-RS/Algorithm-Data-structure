#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a[200000],q,m,i,j,k,d=0,b;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    sort(a,a+n);
    while(q--){
        cin>>m;
        long long int c=0;
        k=0;d=0;b=n%4+n/4;
        int s=1;
        while(1){
            j=k;
            k+=j+b;
            a[n]=0;b=0;
            if(k==n)k--;
            if(k>=n||j>=n) break;
            cout<<k<<j<<endl;
            for(i=j;i<=k;i++){
                if(a[i]>m){
                        d=1;
                        s=0;
                    break;
                }
                if(a[i]==m)c++;
            }
            if(d)break;

        }
        if(d==0){
          if(a[n-1]<=m){s=0;i=n;}
          else i=c;
        }


        cout<<i<<endl;
    }

}
