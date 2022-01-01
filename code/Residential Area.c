#include<stdio.h>
int main(){
    int t,o;
    scanf("%d",&t);
    for(o=1;o<=t;o++){
        int n,i,j,c=0,a[105][105],p,q;
        int ai,b[5][5];
        scanf("%d",&n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        if(n<5){
            printf("Case %d: %d\n",o,c);
            continue;
        }
        p=n-4;
        q=n-1;
        for(j=0;j<q;j++){
            for(i=0;i<p;i++){
                int ar[11]={0};
                ar[a[j][i]]++;ar[a[j][i+1]]++;ar[a[j][i+2]]++;ar[a[j][i+3]]++;ar[a[j][i+4]]++;
                ar[a[j+1][i]]++;ar[a[j+1][i+1]]++;ar[a[j+1][i+2]]++;ar[a[j+1][i+3]]++;ar[a[j+1][i+4]]++;
                if((ar[1]==1)||(ar[2]==1)||(ar[3]==1)||(ar[4]==1)||(ar[5]==1)||(ar[6]==1)||(ar[7]==1)||(ar[8]==1)||(ar[9]==1)||(ar[10]==1))
                {
                    c++;
                }
            }
        }
        for(j=0;j<p;j++){
            for(i=0;i<q;i++){
                int ar[11]={0};
                ar[a[j][i]]++;ar[a[j+1][i]]++;ar[a[j+2][i]]++;ar[a[j+3][i]]++;ar[a[j+4][i]]++;
                ar[a[j][i+1]]++;ar[a[j+1][i+1]]++;ar[a[j+2][i+1]]++;ar[a[j+3][i+1]]++;ar[a[j+4][i+1]]++;
                if((ar[1]==1)||(ar[2]==1)||(ar[3]==1)||(ar[4]==1)||(ar[5]==1)||(ar[6]==1)||(ar[7]==1)||(ar[8]==1)||(ar[9]==1)||(ar[10]==1))
                {
                    c++;
                }
            }
        }
        printf("Case %d: %d\n",o,c);
    }
    return 0;
}

