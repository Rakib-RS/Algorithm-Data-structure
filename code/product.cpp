#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  int a[10000],x,y,i,j,k,s,m,c;
    while(cin>>x>>y){
        m=1;a[0]=x;c=0;
        for(i=0;i<m;i++){
            s=a[i]*y+c;
            a[i]=s%10;
            c=s/10;
        }
        while(c>0){
            a[m]=c%10;
            c/=10;
            m++;
        }
        for(i=m-1;i>=0;i--){
            if(i>0)
                cout<<a[i];
            else cout<<a[i]<<endl;
        }

    }
    return 0;


}
