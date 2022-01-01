#include<stdio.h>
int main(){
    int n,i,j,k,v,v1;
    scanf("%d",&n);
    v=n;
    v1=n;
    int l=1,m;
    for(i=1;i<2*n;i++){
        k=i;
        if(i>n) k=n-l++;
        v1=n+1;
        m=k;
        for(j=1;j<2*n;j++){
            if(i==1||i==2*n-1){
                if(j<2*n-1)
                    printf("%d ",v);
                else
                    printf("%d\n",v);
            }
            else if(i<=n){
                if(k>0&&j<=n){
                        printf("%d ",--v1);
                        k--;
                }
                else{

                    if(j<=2*n-1-i)
                        printf("%d ",v1);
                    else{
                        if(i==n){
                            if(j<2*n-1)
                                printf("%d ",++v1);
                            else
                                printf("%d\n",++v1);
                        }
                        else{
                            if(j<2*n-1)
                                printf("%d ",v1++);
                            else
                                printf("%d\n",v1);
                        }
                    }
                }
            }
            else{
                if(k>0&&j<=n){
                        printf("%d ",--v1);
                        k--;
                }
                else{

                    if(j<=2*n-1-m)
                        printf("%d ",v1);
                    else{
                        if(i==n){
                            if(j<2*n-1)
                                printf("%d ",++v1);
                            else
                                printf("%d\n",++v1);
                        }
                        else{
                            if(j<2*n-1)
                                printf("%d ",v1++);
                            else
                                printf("%d\n",v1);
                        }
                    }
                }
            }
            /*if(j<2*n-1)
                printf("%d ",v);
            else
                printf("%d\n",v);*/
        }
    }

    return 0;
}
