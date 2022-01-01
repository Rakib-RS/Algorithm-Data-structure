#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,n,i,j;
    double sum,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        sum=1;
        for(i=1;i<n;i++){
            sum+=((n*1.0)/(n-i));
        }
        printf("Case %d: %.8lf\n",tc++,sum);
    }

    return 0;
}
