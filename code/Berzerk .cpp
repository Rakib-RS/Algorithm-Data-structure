#include<stdio.h>
int main()
{
    int t;
    int a[10000],b[10000];
    int n,i,j,temp,m,x,te=1,base,d,r;

    scanf("%d",&t);
    while(t--)
    {
       scanf("%d%d",&n,&base);
       a[0]=1;
       m=1;

       temp = 0;
       for(i=1;i<=n;i++)
       {
            for(j=0;j<m;j++)
            {
               x = a[j]*i+temp;
               a[j]=x%10;
               temp = x/10;
            }
             while(temp>0)
             {
               a[m]=temp%10;
               temp = temp/10;
               m++;
             }
      }j=0;d=0;int ln=0;
      for(i=0;i<m;i++){
            d+=a[i];
            if(d<base){
                d=d*10;
                continue;
            }
            r=d%base;
            b[ln++]=r;
            d=d/base;
      }
      printf("Case %d: ",te);te++;
      for(i=ln-1;i>=0;i--){
        printf("%d",b[i]);
      }
      printf("\n");

    }
    return 0;
}

