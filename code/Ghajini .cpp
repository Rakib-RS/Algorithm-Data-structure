#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,a[200000],n,d,mx,dif,b,m1,m2,mx1;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&d);mx=0;j=1;dif=0;;
        scanf("%lld",&a[1]);m1=a[1];m2=a[1];
        for(i=2;i<=n;i++){
                scanf("%lld",&a[i]);
            if(j>0&&j<d){
                m1=min(m1,a[i]);
                m2=max(m2,a[i]);
                j++;
            }
            if(j==d){
                dif=m2-m1;
                /*cout<<"m2="<<m2<<endl;
                cout<<"m1="<<m1<<endl;*/
                mx=max(mx,dif);j=1;m1=a[i];m2=a[i];b=0;

            }
        }
        dif=m2-m1;
        mx=max(mx,dif);
        m1=a[n];m2=a[n];j=1;mx1=0;
        for(i=n-1;i>=1;i--){
            if(j>0&&j<d){
                m1=min(m1,a[i]);
                m2=max(m2,a[i]);
                j++;
            }
            if(j==d){
                dif=m2-m1;
                /*cout<<"m2="<<m2<<endl;
                cout<<"m1="<<m1<<endl;*/
                mx1=max(mx1,dif);j=1;m1=a[i];m2=a[i];b=0;

            }
        }
        dif=m2-m1;
        mx1=max(mx1,dif);mx=max(mx,mx1);
        printf("Case %lld: %lld\n",tc,mx);tc++;
    }
    return 0;
}
