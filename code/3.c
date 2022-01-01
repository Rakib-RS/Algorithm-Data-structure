#include<stdio.h>
int main(){
    int math,phy,che,total,sum;
    scanf("%d%d%d",&math,&phy,&che);
    total=math+phy+che;
    sum=math+phy;
    if((math>=60&&phy>=50&&che>=200&&total>=200)||sum>=150)
        printf("Eligible\n");
    else
        printf(" Not Eligible\n");


    return 0;
}

