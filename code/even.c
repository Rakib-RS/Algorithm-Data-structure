#include<stdio.h>//printf 1-100 even number;
int main(){
    int n,i;
    for(i=1;i<=100;i++){
        if(i%2==0)
            printf("%d ",i);
    }
    return 0;
}
