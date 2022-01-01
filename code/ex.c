#include<stdio.h>
#include<math.h>
int main(){
    int i,j,n,k;
    double x,sum,a[1000],p,f,t;
    printf("Enter the value of x : ");
    scanf("%lf",&x);
    printf("Enter N:");
    scanf("%d",&n);
    j=0;
    for(i=0;i<=n;i++){
            k=1;f=1;
        while(k<=i){
            f=(f*1.0)/k;
            k++;
        }
        a[j++]=f;
    }
    sum=0;
    for(i=0;i<=n;i++){
        t=pow(x,i)*a[i];
        sum=sum+t;

    }
    printf("e %lf is= %lf",x,sum);
    return 0;
}

