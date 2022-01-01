#include<stdio.h>
int main(){
    int i,n,j=1;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
            j=0;
    }
    if(j)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);


    return 0;
}


