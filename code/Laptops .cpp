#include<bits/stdc++.h>
using namespace std;
long long int a[200000],b[200000];
map<int,int> mp;
int main(){
    long long int n,c,q,i,j,m,qm;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        mp[a[i]]=i;
    }
    sort(a,a+n);
    c=a[n-1];
    m=a[0];
    q=b[mp[c]];
    qm=b[mp[m]];
    j=0;
    for(i=0;i<n;i++){
        if(b[i]>q||b[i]<qm)
            j++;
            if(j==1)
                break;
    }
    /*if(n<=2){
        if(n==2) if(a[0]<a[1]&&b[0]>b[1]) j=2; else j=1;
        if(n==1) j==1;
    }*/
    if(j>0) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
 return 0;
}

