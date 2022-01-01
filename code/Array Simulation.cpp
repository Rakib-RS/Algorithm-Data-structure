#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,m,sum,d,mul,p,i,j,r,test=1,a1,a2,tem,ans,k;
    double b1,b2;
    string s,s1;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&n,&m);
        long long int a[n+5];
        for(j=0;j<n;j++)
            scanf("%lld",&a[j]);
            sum=0;mul=1;d=1,r=0;
            printf("Case %lld:\n",test);
            test++;
            getchar();
        while(m--){
            getline(cin,s);
            if(s.find("S")!=string::npos){
                s.erase(0,1);
                sum=atoll(s.c_str());
                for(i=0;i<n;i++)
                    a[i]+=sum;
            }
            else if(s.find("R")!=string::npos)
                reverse(a,a+n);
            else if(s.find("M")!=string::npos){
                s.erase(0,1);
                mul=atoll(s.c_str());
                for(i=0;i<n;i++)
                    a[i]*=mul;
            }
            else if(s.find("D")!=string::npos){
                s.erase(0,1);
                d=atoll(s.c_str());
                for(i=0;i<n;i++)
                    a[i]/=d;
            }
            else{
                    s.erase(0,1);
                    istringstream s2(s);
                    s2>>a1>>a2;
                    tem=a[a1];
                    a[a1]=a[a2];
                    a[a2]=tem;
            }
        }
        for(i=0;i<n;i++){
            if(i<n-1)
                printf("%lld ",a[i]);
            else printf("%lld\n",a[i]);
        }
    }
    return 0;
}

