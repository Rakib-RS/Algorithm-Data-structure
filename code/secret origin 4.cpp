#include<bits/stdc++.h>
using namespace std;
int main(){
        long long int n,t,i,j,m,s,n1,k,r,j1;
        i=1;
        cin>>t;
        while(t--){
            cin>>n;k=0;int a[1000],c=0;
            while(n>0){
                r=(n&1);
                a[k++]=r;
                if(r==1)c++;
                n=n>>1;
            }s=1;
           /* reverse(a,a+k);*/
            for(j=0;j<k-1;j++){
                if(a[j]==1&&a[j+1]==0){
                    a[j]=0;
                    a[j+1]=1;
                    s=0;break;
                }
                else if(a[j]==1&&a[j+1]==1&&j<k-2){
                    for(j1=0;j1<j;j1++){
                        if(a[j1]==0){
                        a[j1]=1;
                        a[j]=0;
                        break;
                        }
                    }
                }
            }
            if(s){
                a[k++]=1;
                for(j=0;j<k-1;j++)
                if(c>1){
                    a[j]=1;
                    c--;
                }
                else a[j]=0;
            }s=0;
            double m1;
            for(j=0;j<k;j++){
                m1=pow(2,j);
                s+=(a[j]*m1);
            }
            printf("Case %lld: %lld\n",i,s);
            i++;


        }
    return 0;
}
