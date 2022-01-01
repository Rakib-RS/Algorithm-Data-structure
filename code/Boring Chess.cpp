#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,r1,r2,c1,c2,i,j,ct,k,tc=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&r1,&c1);
        ct=0;
        for(i=1;i<=8;i++){
            for(j=1;j<=8;j++){
                k=(r1-i)*(r1-i)+(c1-j)*(c1-j);
                if(k==5)
                    ct++;
            }
        }
        printf("Case %d: %d\n",tc++,ct);
    }


    return 0;
}
