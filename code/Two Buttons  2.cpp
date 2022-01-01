#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,k=0,a[10000],x,sum=0;
    cin>>n>>m;
    if(n>=m)sum=n-m;
    else {
        while(1){
                if(m<=n) break;
                sum++;
                if(m%2!=0)m+=1;
                else m/=2;
        }
        sum+=n-m;
    }
cout<<sum<<endl;
    return 0;
}
