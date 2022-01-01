#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,i,j,w[110],b[110],s1,s2,s3,d,un,up,n,s4;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&w[i]);
        for(i=1;i<=n;i++)
            scanf("%d",&b[i]);
        s1=0;s2=0;s3=0;s4=0;
        for(i=1;i<=n;i++){
            d=b[i]-w[i]-1;
            un=w[i];
            up=n-b[i]-1;
            /*cout<<d<<" ";
            cout<<un<<" ";
            cout<<up<<" ";
            s1=s1^d^un;
            s2=s2^d^up;
            s3=s3^up^un;*/
            s4=s4^d;
        }
        if(s4)
            printf("Case %d: white wins\n",tc++);
        else
            printf("Case %d: black wins\n",tc++);
    }
    return 0;
}
