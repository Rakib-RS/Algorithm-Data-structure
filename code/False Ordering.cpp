#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j,t,i=1,ar[2000],d=2,con=1,k,tc=1;
    ar[1]=1;i=2;
    while(i<=1000){
        con++;
        for(j=1000;j>0;j--){
            int s,c=0,a;
            s=sqrt(j);
            for(k=1;k<=s;k++){
                if(j%k==0){
                    c++;
                    a=j/k;
                if(a!=k)
                    c++;
                }
            }
            if(c==con){
                ar[i++]=j;
            }

        }
    }
    /*for(i=1;i<=1000;i++)
        cout<<ar[i]<<" ";*/
        scanf("%d",&t);
        while(t--){
                scanf("%d",&n);
        printf("Case %d: %d\n",tc,ar[n]);
        tc++;

        }


    return 0;
}
