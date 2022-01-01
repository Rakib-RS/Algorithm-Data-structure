#include<stdio.h>
int input(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    return n;
}
int prime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int n,j;
    n=input();
    j=prime(n);
    if(j==1)
        printf("number is prime\n");
    else printf("number is not prime\n");
    return 0;
}
