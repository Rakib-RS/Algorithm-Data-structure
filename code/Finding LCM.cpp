#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,a,b,c,d1[1000],d2[1000],d[1000],j,k1,k2,f1,mx,i,m;
    double mul;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld%lld",&a,&b,&c);k1=0;k2=0;mul=1.0;
        map<int,int>m1,m2,m3;
        if(c%a!=0||c%b!=0)
            printf("Case %lld: impossible\n",tc);
        else{
                j=3;
                while(a%2==0){
                    a/=2;
                    m1[2]++;
                    d1[k1++]=2;
                }
            while(j*j<=a){
                if(a%j==0){
                    a/=j;
                    d1[k1++]=j;
                    m1[j]++;
                }
                else j+=2;
            }
            d1[k1++]=a;m1[a]++;
            j=3;
            while(b%2==0){
                    b/=2;
                    m2[2]++;
                    d2[k2++]=2;
            }
            while(j*j<=b){
                if(b%j==0){
                    b/=j;
                    m2[j]++;
                    d2[k2++]=j;
                }
                else j+=2;
            }
            d2[k2++]=b;m2[b]++;mul=1;
            for(i=0;i<k2;i++){
                f1=d2[i];
                if(m2[f1]==0) continue;
                mx=max(m1[f1],m2[f1]);
                mul*=pow(f1,mx);m1[f1]=0;m2[f1]=0;m3[f1]=mx;
            }
            for(i=0;i<k1;i++){
                f1=d1[i];
                if(m1[f1]==0)continue;
                mul*=pow(f1,m1[f1]);
                    m3[f1]=m1[f1];m1[f1]=0;
            }
            mul=c/mul;k1=0;m=mul;
            while(m%2==0){
                m=m/2;
                d[k1++]=2;
                m3[2]++;
            }
            j=3;
            while(j*j<=m){
                if(m%j==0){
                    m/=j;
                    d[k1++]=j;
                    m3[j]++;
                }
                else j+=2;
            }
            d[k1++]=m;m3[m]++;mul=1;
            for(i=0;i<k1;i++){
                f1=d[i];
               /* cout<<f1<<endl;*/
                if(m3[f1]==0) continue;
                mul*=pow(f1,m3[f1]);
                m3[f1]=0;

            }
            m=mul;
            printf("Case %lld: %lld\n",tc,m);

        }
        tc++;
    }
    return 0;
}
