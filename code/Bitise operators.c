#include<stdio.h>
#include<math.h>
int main(){
    int n,k,and,or,xor,i,j,mxand,mxor,mxxor,c1=1,c2=2,c3=3;
    scanf("%d%d",&n,&k);
    mxand=mxor=mxxor=0;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            and=i&j;
            or=i|j;
            xor=i^j;
            if(and<k&&c1){
                mxand=and;
                c1=0;

            }
            if(or<k&&c2){
                mxor=or;
                c2=0;
            }
            if(xor<k&&c3){
                mxxor=xor;
                c3=0;
            }
            if(and<k&&and>mxand)
                mxand=and;
            if(or<k&&or>mxor)
                mxor=or;
            if(xor<k&&mxxor<xor)
                mxxor=xor;


        }
    }
    printf("%d\n%d\n%d\n",mxand,mxor,mxxor);

    return 0;
}
