#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j;
    double am,v,sd,sum=0,a[200],d;
    printf("Enter the number of element(max 20): ");
    scanf("%d",&n);
    printf("Enter the element:\n");
    for(i=1;i<=n;i++){
        scanf("%lf",&a[i]);
        sum=sum+a[i];
    }
    am=sum/n;
    sum=0;
    for(i=1;i<=n;i++){
        d=a[i]-am;
        sum=sum+(d*d);
    }
    v=sum/n;
    sd=sqrt(v);
    printf("Arithmetic mean is : %.5lf\n",am);
    printf("Variance is : %.5lf\n",v);
    printf("Standard deviation is : %lf\n",sd);
    return 0;
}
