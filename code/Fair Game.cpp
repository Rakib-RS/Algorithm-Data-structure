#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,c,d=0,j,k=1,a1=0,a2=0;
    cin>>n;
    for(j=0;j<n;j++){
        cin>>a;
        if(j==0)
            c=a;
        if(a!=c&&d==0)
            d=a;
        if(d>0&&(a!=c&&a!=d)){
            k=0;
        }
        if(a==c)
            a1++;
        if(a==d) a2++;
    }
    if(k==1&&d>0&&a1==a2)
        printf("YES\n%d %d\n",c,d);
    else cout<<"NO"<<endl;
return 0;
}
