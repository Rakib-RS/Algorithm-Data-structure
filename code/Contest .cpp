#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,v,m,t;
    cin>>a>>b>>c>>d;
    m=max((3*a)/10,a-(a*c)/250);
    v=max((3*b)/10,b-(b*d)/250);
    if(m>v)
        printf("Misha\n");
    else if(v>m)
        printf("Vasya\n");
    else cout<<"Tie\n";



    return 0;
}
