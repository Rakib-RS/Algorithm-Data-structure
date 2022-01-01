#include<bits/stdc++.h>
using namespace std;
unsigned long long int power(unsigned long long int x,unsigned long long int y,unsigned long long int m){
    if(y==0)
        return 1;
    unsigned long long int p=power(x,y/2,m)%m;
    p=(p*p)%m;
    if(y%2!=0)
        p=(x*p)%m;
    return p;
}
unsigned long long int modinverse(unsigned long long int x,unsigned long long int m){
    return power(x,m-2,m);
}
int main(){
    set<unsigned long long int>st;
    set<unsigned long long int>::iterator it;
    map<unsigned long long int,unsigned long long int>mp;
   unsigned  long long int t,tc=1,n,i,j,k,sum,p,s1,s2,m=1000000007,s3;
    scanf("%llu",&t);
    while(t--){
        scanf("%llu%llu",&n,&p);
        st.clear();
        mp.clear();
        if(n%2==0)
            st.insert(2);
        while(n%2==0){
            mp[2]++;
            n/=2;
        }
        j=3;
        while(j*j<=n){
            if(n%j==0){
                mp[j]++;
                st.insert(j);
                n/=j;
            }
            else j+=2;
        }
        if(n!=1){
            st.insert(n);
            mp[n]++;
        }
        sum=1;
        for(it=st.begin();it!=st.end();it++){
            k=mp[*it]*p+1;
            s1=power(*it,k,m);
            s2=modinverse(*it-1,m);
            s3=((s1-1+m)%m*s2)%m;
            sum*=s3;
            sum=sum%m;
        }
        printf("Case %llu: %llu\n",tc++,sum);
    }

    return 0;
}
