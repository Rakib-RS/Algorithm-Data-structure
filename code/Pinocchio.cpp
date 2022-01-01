#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,s,a[1000],n,k;
    i=1;
    cin>>t;
    while(t--){
            s=0;
        scanf("%d",&n);
        for(j=0;j<n;j++){
                scanf("%d",&a[j]);
            if(j==0&&a[j]>2)s=1;
            if(j==0&&a[j]>7){
                k=a[j]-7;
                s=1;
                s+=k/5;
                if(k%5!=0)s++;
            }
            if(j>0&&(a[j]>a[j-1])){
                k=a[j]-a[j-1];
                s+=k/5;
                if(k%5!=0)s++;
            }
        }
        printf("Case %d: %d\n",i,s);
        i++;
    }

    return 0;
}
