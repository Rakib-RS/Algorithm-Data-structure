#include<stdio.h>
int max_value(int a,int b,int c,int d){
    int mx=a;
    if(b>mx){
        mx=b;
        if(c>mx)
            mx=c;
        if(d>mx) mx=d;

    }
    else if(c>mx){
        mx=c;
        if(b>mx)
            mx=b;
        if(d>mx) mx=d;

    }
   else if(d>mx){
        mx=d;
        if(b>mx)
            mx=b;
        if(c>mx) mx=c;

    }
    return mx;
}
int main(){
    int a,b,c,d,mx;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    mx=max_value(a,b,c,d);
    printf("%d\n",mx);
    return 0;

}
