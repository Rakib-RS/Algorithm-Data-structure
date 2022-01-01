#include<stdio.h>
int main(){
    double i1,i2,i3,r1,r2,r3,e1,e2,l,h;
    printf("Enter the resistane in oder R1,R2,R3 : ");
    scanf("%lf%lf%lf",&r1,&r2,&r3);
    printf("Enter the voltage of source in oder E1,E2 : ");
    scanf("%lf%lf",&e1,&e2);
    l=(e2*r3)+e1*(r1+r3);
    h=(r1+r3)*(r2+r3)-(r3*r3);
    i1=(l*1.0)/h;
    l=e1*r3+e2*(r1+r3);
    i2=(l*1.0)/h;
    i3=i1-i2;
    printf("I1= %lf I2=%lf I3=%lf \n",i1,i2,i3);

    return 0;
}
