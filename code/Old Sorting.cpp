#include<bits/stdc++.h>
using namespace std;
int ac(int *ar,int n);
int dc(int *ar,int n);
int main(){
    int t,tc=1,n,a[1004],b[1004],i,m,j,c1,c2;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        c1=ac(b,n);
        c2=dc(a,n);
        c2=min(c1,c2);
        printf("Case %d: %d\n",tc,c2);
        tc++;
    }
    return 0;
}
int ac(int *b,int n){
    int i,j,m,c1=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[i]>b[j]){
                    m=b[j];
                    b[j]=b[i];
                    b[i]=m;
                    c1++;
            }
        }
    }
    return c1;
}
int dc(int *a,int n){
   int  i,j,m,c2=0;
    for(i=n;i>=0;i--){
            for(j=0;j<i;j++){
                if(a[i]<a[j]){
                    m=a[j];
                    a[j]=a[i];
                    a[i]=m;
                    c2++;
                }
            }
        }
    return c2;
}
