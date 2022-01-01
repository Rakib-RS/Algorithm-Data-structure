#include<stdio.h>
int sum(int a,int b){

    return a+b;
}
int mul(int a,int b){
    return a*b;
}
int sub(int a,int b){
    return a-b;
}
int div(int a,int b){
    return a/b;
}
int mod(int a,int b){
    return a%b;
}
int main(){
    int choice,a,b;
    while(1){
        printf("if you want sum press:1\n");
        printf("if you want subtraction press:2\n");
        printf("if you want multiplication press:3\n");
        printf("if you want division press:4\n");
        printf("if you want modulus press:5\n");
        printf("Exit by pressing -1\n");
        scanf("%d",&choice);
        if(choice==-1){
            break;
        }
        if(choice==1){
            printf("Enter two numbers\n");
            scanf("%d%d",&a,&b);
            printf("sum is %d\n",sum(a,b));
        }
        if(choice==2){
            printf("Enter two numbers\n");
            scanf("%d%d",&a,&b);
            printf("sub is %d\n",sub(a,b));
        }
        if(choice==3){
            printf("Enter two numbers\n");
            scanf("%d%d",&a,&b);
            printf("mul is %d\n",mul(a,b));
        }
        if(choice==4){
            printf("Enter two numbers\n");
            scanf("%d%d",&a,&b);
            printf("div is %d\n",div(a,b));
        }
        if(choice==5){
            printf("Enter two numbers\n");
            scanf("%d%d",&a,&b);
            printf("mod is %d\n",mod(a,b));
        }
    }

    return 0;
}
