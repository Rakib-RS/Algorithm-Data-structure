#include<stdio.h>
#include<math.h>
int main(){
    int i,j,n,k;
    double x,sum,a[1000],p,f,t;
    printf("Enter the value of x in radian : ");
    scanf("%lf",&x);
    printf("Enter the power of End term:");
    scanf("%d",&n);
    j=0;
    for(i=3;i<=n;i=i+2){
            k=1;f=1;
        while(k<=i){
            f=(f*1.0)/k;
            k++;
        }
        a[j++]=f;
    }
    sum=x;k=1;j=0;
    for(i=3;i<=n;i=i+2){
            if(k){
                t=pow(x,i)*a[j++];
                k=0;
                sum=sum-t;
            }
            else{
                t=pow(x,i)*a[j++];
                k=1;
                sum=sum+t;
            }

    }
    printf("sin of %lf is %lf\n",x,sum);
    return 0;
}
