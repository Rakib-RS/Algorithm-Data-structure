#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,p,q,x,i,j;
    double s1,s2,s;
    cin>>t;
    while(t--){
        cin>>n;s=0;
        while(n--){
            cin>>p>>q>>x;
            s1=p*x/100.0+p;
            s1=s1-s1*x/100.0;
            s+=((p-s1)*q);
        }
        printf("%.8lf\n",s);
    }
    return 0;
}
