#include<stdio.h>
float x1,x2,x3;
void angle(float b,float c){
    x1=asin((b*1.0)/c);
    x1=(x1*180)/3.1416;
    x2=90-x1;

}
int main(){
    float a,b,c,j,k;
    scanf("%f%f",&a,&b);
    c=sqrt(a*a+b*b);
    printf("%f\n",c);
    angle(b,c);
    j=x1;k=x2;
    if(x2>x1)
        j=x2;
    printf("90 %f %f\n",j,k);
    return 0;
}
