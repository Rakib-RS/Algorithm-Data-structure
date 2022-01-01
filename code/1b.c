#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double r,f,i,p;
    printf("Enter the rate of interest: ");
    scanf("%lf",&r);
    printf("Enter the number of year:");
    scanf("%d",&n);
    printf("Enter the amount of deposited:");
    scanf("%lf",&p);
    i=r/100.0;
    f=p*pow((1+i),n);
    printf("total:%lf\n",f);
    return 0;
}
