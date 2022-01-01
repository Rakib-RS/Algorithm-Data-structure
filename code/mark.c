#include<stdio.h>
int main(){
    int a[10],marks,i,j,k,temp;
    float avg,sum;
    printf("Enter mark of test\n");
    for(i=1;i<=4;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter mark of assignment\n");
        scanf("%d",&marks);
    for(i=1;i<=4;i++){
        for(j=i+1;j<=4;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    sum=0;
    for(i=1;i<=4;i++){
        printf("%d \n",a[i]);
        if(i>1)
        sum=sum+a[i];
    }
    avg=sum/3.0;
    printf("avg=%f\n",avg);
    sum=avg+marks;
    printf("Total= %f\n",sum);
    return 0;
}
