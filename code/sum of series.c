#include<stdio.h>
int main(){
    int i,j,n;
    double sum=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(1.0)/i;
    }
    printf("Sum of the series is: %lf\n",sum);
    return 0;
}
