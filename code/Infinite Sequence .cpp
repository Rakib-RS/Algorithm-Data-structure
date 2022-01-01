#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,i,r;
    double n,d;
    cin>>a>>b>>c;
    if(c!=0)
    n=(((b-a)*1.0)/c)+1;
    r=n;d=n-r;
    if(c==0&&a==b)printf("YES\n");
    else if(c==0&&a!=b)printf("NO\n");
    else if(r<=0||d!=0)printf("NO\n");
    else printf("YES\n");


    return 0;
}
