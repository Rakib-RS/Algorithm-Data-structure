#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,tc=1,i,j,c,ma,n,a[5000],a1,b,d,l,h,mid,last;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        a[0]=0;
        for(i=1;i<=n;i++)
            scanf("%lld",&a[i]);
            c=0;
        sort(a,a+n+1);
        for(i=n;i>2;i--){
                a1=a[i];
                b=a[i-1];
                d=a1-b;l=1;h=i-2;last=i-1;j=2;cout<<"l="<<l<<endl;cout<<"h="<<h<<endl;
            while(h-1>l){
                    cout<<"ok"<<endl;
                mid=(l+h)/2;
                if(a[mid]>d&&a[mid-1]<=d)
                    break;
                if(a[mid]<d)
                    l=mid;
                else
                    h=mid;
            }
            if(h-l==1){
                if(a[l]>d){
                    c+=2;
                }
                else if(a[h]>d)c+=1;else c+=0;
            }
        else if(h==l){
                if(a[l]>d)c++;else c+=0;
            }
            else{
                   /* cout<<"last="<<last<<endl;
                    cout<<"mid="<<mid<<endl;*/
                c+=(last-mid);
                //cout<<c<<endl;
            }
        }
        printf("Case %lld: %lld\n",tc,c);
        tc++;
    }
    return 0;
}

