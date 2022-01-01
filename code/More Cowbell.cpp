#include<bits/stdc++.h>
using namespace std;
long long int a[2000000];
long long int container(long long int n,long long int mid);
int main(){
    long long int n,m,t,tc=1,i,j,h,l,mid,m1,c=0,mx,s=0;
    scanf("%lld%lld",&n,&m);h=0;mx=0;
    for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            mx=max(mx,a[i]);
            s+=a[i];
    }
        l=mx;h=s;
        while(h>=l){
                mid=(l+h)/2;
            m1=container(n,mid);
           /*cout<<"l="<<l<<endl;
           cout<<"h="<<h<<endl;
           cout<<"m1="<<m1<<endl;*/
           if(m1>m){
                    if(l==mid)l++;
                   else l=mid;
           }
            else {  if(h==mid)h--;
                   else h=mid;
            }
        }
        l=max(l,mx);
        printf("%lld\n",l);
    return 0;
}
long long int container(long long int n,long long int mid){
    long long int s,i,j,c=0,k=1;
    s=0;
    for(i=0;i<n;i++){
        s+=a[i];
        if(s<mid&&k<=2){
            continue;
            k++;
        }
        else if(s==mid){
            c++;
            s=0;k=0;
        }
        else {
            if(s>a[i]){
                c++;
            s=a[i];
            }
           else if(k==2){
                c++;
                s=0;
           }
            k=0;

        }
    }
    if(s>0)c++;
    return c;
}

