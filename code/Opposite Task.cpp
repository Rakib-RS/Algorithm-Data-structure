#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t;
    scanf("%d",&t);
    while(t--){
            b=0;
        scanf("%d",&a);
        if(a>10){
            b=a-10;
            a=10;
        }
        printf("%d %d\n",b,a);
    }
    return 0;
}
