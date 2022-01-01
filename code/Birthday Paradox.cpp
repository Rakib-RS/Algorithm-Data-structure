#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,tc=1,t,i,j;
    double l,h,p;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        p=0;j=1;
        h=1;
        while(p<.5){
            h*=((n-j)/(n*1.0));
            j++;
            p=1-h;
        }
        printf("Case %d: %d\n",tc++,j-1);
    }
    return 0;
}
