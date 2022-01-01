#include<bits/stdc++.h>
using namespace std;
int oldsort(int *a,int n);
int main(){
    int t,tc=1,i,j,a[110],n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        printf("Case %d: %d\n",tc,oldsort(a,n));
        tc++;
    }
    return 0;
}
int oldsort(int *a,int n){
    int i,t,c=0,j;
    for(i=1;i<=n;i++){
        if(a[i]!=i){
            for(j=i;j<=n;j++){
                if(a[j]==i){
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                    c++;
                }
            }
        }
    }
    return c;

}
