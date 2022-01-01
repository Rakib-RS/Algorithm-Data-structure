#include<bits/stdc++.h>
using namespace std;
double a[1000005],p,b,sum;
int main(){
    int t,tc=1,i,n,r,j;
    b=0;
    a[0]=0;
    for(i=1;i<=100000000;i++){
        p=b+1.0/i;
        b=p;
        if(i%100==0)
            a[i/100]=p;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        b=0;
        sum=a[n/100];
        j=n/100;
        p=0;
        for(i=100*j+1;i<=n;i++){
            p=b+1.0/i;
            b=p;
        }
        printf("Case %d: %.10lf\n",tc++,sum+p);
    }
    return 0;
}

