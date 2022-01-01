#include<stdio.h>//6.4;
int main(){
    int a,b,s,j,n;
    scanf("%d",&n);
    a=0;
    b=1;
        printf("%d ",b);
    for(j=2;j<=n;j++){
        s=a+b;
        a=b;
        b=s;
        printf("%d ",s);

    }

    return 0;
}
