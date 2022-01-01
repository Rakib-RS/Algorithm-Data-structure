#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll s,k,i,j,t,tc=1,r,l,z;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&k);
        getchar();
        string s1,s2,s3,s4;
        cin>>s1;
        s=0;
        for(i=1;i<k;i++){
            s+=(s1.size()-(i-1));
        }
        for(i=0;i<=s1.size()-k;i++){
            s2=s1[i];
            r=i+1;
            for(l=0;l<k-2;l++)
                s2+=s1[r++];
            for(j=i+k-1;j<s1.size();j++){
                s2+=s1[j];
                s3=s2;
                s4=s2;
                for(z=0;z<=s2.size()-k;z++){
                    s3=s2;
                    s3.erase(0,z);
                    s4=s3;
                    reverse(s3.begin(),s3.end());
                    if(s4==s3)
                        break;
                }
                if(s4==s3)
                    break;
                    s++;
            }
        }
        printf("%lld\n",s);
    }
    return 0;
}
