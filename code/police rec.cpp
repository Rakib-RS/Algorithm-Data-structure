#include<stdio.h>
int main(){
    long long int i,j,s,n,a[200000];
    scanf("%lld",&n);
    s=0;j=0;
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i]==-1&&j==0){
            s++;
            if(j>0) j--;
        }
        else if(a[i]>0)j=a[i]+j;
        if(a[i]==-1&&j>0) j--;
    }
    printf("%lld\n",s);

}
