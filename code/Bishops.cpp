#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,test=1,i,j,x1,y1,x2,y2,d1,d2,s1,s2;
    cin>>t;
    while(t--){
        scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
        d1=x1-y1;d2=x2-y2;
        s1=x1+y1;s2=x2+y2;
        if((s1%2==0&&s2%2!=0)||(s1%2!=0&&s2%2==0))
            printf("Case %lld: impossible\n",test);
        else{
            if(d1==d2||s1==s2)j=1;
            else j=2;
            printf("Case %lld: %lld\n",test,j);
        }
        test++;
    }
    return 0;
}
