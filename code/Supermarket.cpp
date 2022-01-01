#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m1,a,b,s1,s2,j=1;
    double m,ma;
    ma=0;
    cin>>n>>m1;
    while(n--){
        cin>>a>>b;
        if(j==1){
            ma=(a*1.0)/b;s1=a;s2=b;
            j=0;
        }
        m=(a*1.0)/b;
        if(m<ma){
            ma=m;
            s1=a;
            s2=b;
        }
    }
    m=(s1*m1*1.0)/s2;
    printf("%.8lf\n",m);

    return 0;
}
