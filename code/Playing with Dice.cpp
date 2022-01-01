#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,a1=0,c=0,b1=0,d1,d2;
    cin>>a>>b;
    for(i=1;i<=6;i++){
        d1=i-a;
        d2=i-b;
        d1=abs(d1);
        d2=abs(d2);
        if(d1<d2)
            a1++;
        else if(d1>d2)
            b1++;
        else c++;

    }
    printf("%d %d %d\n",a1,c,b1);

    return 0;
}
