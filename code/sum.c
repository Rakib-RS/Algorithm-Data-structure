#include<stdio.h>
int main(){
    int i,sum=0,a[11];
    for(i=0;i<=10;i++){
        a[i]=i;
        sum=sum+a[i];
    }
    printf("sum is %d\n",sum);

    return 0;
}
