#include<stdio.h>//6.1;
int main(){
    int n,a,b,i,r;
    scanf("%d",&n);
    r=0;
    while(n){
        r=r*10+n%10;
        n=n/10;

    }
    printf("%d\n",r);
    return 0;

}
