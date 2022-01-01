#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c=0,s,i,j,n,k;
    cin>>n>>k;s=0;
    for(i=1;i<=n;i++){
        cin>>a;
        if(k>0)
        c++;
        s=s+a;
        if(s>8&&k>0){
            k=k-8;
            s-=8;
        }
        else if(s<=8&&k>0){
            k-=s;
            s=0;
        }

    }

    if(k<=0)printf("%d\n",c);
    else printf("-1\n");
    return 0;
}
