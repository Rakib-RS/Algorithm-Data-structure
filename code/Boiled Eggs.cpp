#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,p,q,i,j,sum,a[1000],k,c,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d",&n,&p,&q);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        c=0;sum=0;l=0;
        sort(a,a+n);
        for(j=0;j<n;j++){
            sum+=a[j];
            l++;
            if(sum>q||l>p)
                break;
            c++;
        }
        printf("Case %d: %d\n",i,c);
    }


    return 0;
}
