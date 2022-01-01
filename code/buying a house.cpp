#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,d,ma,mx,i,j,a,dmi,dis,l=1;
    scanf("%d%d%d",&n,&m,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a<=k&&a>0){
            d=abs(i-m)*10;
            if(l==1){
                dis=d;
                l=0;
            }
            if(d<dis){
                dis=d;
            }
        }
    }
    cout<<dis<<endl;

    return 0;
}
