#include<bits/stdc++.h>
using namespace std;
#define MAX 5000006
/*unsigned long long int last[5000006];*/
int prime[500000];
unsigned long long coprime[5000006];
bool st[5000050];
void sive();
void cop();
void val();
int main(){
  unsigned  long long int t,tc=1,a,b,sum,i,s;
   a=178437396804295606451;
    val();
    sive();
    /*for(i=1;i<=5000005;i++){
       if(i%2==0)
            cout<<coprime[i]/2<<endl;
        else cout<<coprime[i]<<endl;
        //cout<<prime[i]<<endl;
    }*/
    sum=0;
    for(i=1;i<=5000003;i++){
            if(coprime[i]==i&&i%2!=0)coprime[i]--;
            if(i%2==0)
                coprime[i]/=2;
            sum+=(coprime[i]*coprime[i]);
            coprime[i]=sum;
    }
    scanf("%llu",&t);
    while(t--){
        scanf("%llu%llu",&a,&b);
        sum=coprime[b]-coprime[a-1];
        printf("Case %llu: %llu\n",tc++,sum);

    }

    return 0;
}
void sive(){
    int i,j,k;
    j=1;
    prime[j++]=2;
    st[0]=st[1]=1;
    for(i=3;i<=MAX;i+=2){
        if(st[i]==0){
            prime[j++]=i;
            if(MAX>=2*i){
                for(k=2*i;k<=MAX;k+=i){
                    coprime[k]*=(i-1);
                    coprime[k]/=i;
                    st[k]=1;
                }
            }
        }
    }
}
void cop(){
    int i,j,k=0;
    for(i=1;i<=5000050;i++){
        coprime[i]=i;
        for(j=2;prime[j]<=sqrt(i);j++){
            if(i%prime[j]==0){
                coprime[i]*=(prime[j]-1);
                coprime[i]/=prime[j];
            }
        }
        if(coprime[i]==i)
            coprime[i]--;
    }

}
void val(){
    for(int i=1;i<=5000005;i++)
        coprime[i]=i;
}
