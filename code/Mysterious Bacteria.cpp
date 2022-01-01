#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,n,p,b,j,i;
    double b1,d;
       /* b1=(1.0*log(46656))/(log(36));
        b=(1.0*log(46656))/(log(36));
        //b=b1;
        cout<<b1<<endl;
        cout<<b<<endl;
        d=b1-b;
        printf("%.16lf\n",d);
    if(b1-b<=.0000000001)cout<<"yes\n";*/
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);j=0;p=1;b1=0;b=0;
        if(n<0){
            n=-n;j=1;
        }
        if(n%2==0){
            for(i=2;i<=sqrt(n);i++){
                b1=(1.0*log(n))/(log(i));
                b=(1.0*log(n))/(log(i));
                d=b1-b;
                if(d<0)d=-d;
                if(d<=0.00000000001&&j!=1){
                    p=b;
                    break;
                }
                if(j==1&&d<=0.00000000001&&b%2!=0){
                    p=b;break;
                }
            }
        }
        else{
            for(i=3;i<=sqrt(n);i+=2){
                b1=(1.0*log(n))/(log(i));
                b=(1.0*log(n))/(log(i));
                d=b1-b;
                b=b1;
                d=b1-b;
                if(d<0)d=-d;
                if(d<=0.00000000001&&j!=1){
                    p=b;
                    break;
                }
                if(j==1&&d<=0.00000000001&&b%2!=0){
                    p=b;break;
                }
            }
        }
        printf("Case %lld: %lld\n",tc,p);tc++;
    }

    return 0;
}
