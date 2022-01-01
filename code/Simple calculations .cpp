#include<bits/stdc++.h>
using namespace std;
int main(){
    double t,a,b,n,c,s,j,a1,d;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        j=n*2;s=0;d=n+1;
        while(n--){
            cin>>c;
            s+=j*c;
            j=j-2;
        }
        a1=(((d-1.0)*a)+b);
        a1=(a1-s)/d;
        printf("%.2lf\n",a1);
        if(t)
            printf("\n");
    }

    return 0;
}
