#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,sum,i=1;
    string s,s1="report";
    cin>> t;
    getchar();
    while(t--){
            sum=0;
            scanf("%lld",&n);
            printf("Case %lld:\n",i);
            i++;
            n++;
            while(n--){
                getline(cin,s);
                if(s==s1){
                    printf("%lld\n",sum);
                }
                else{
                    s.erase(0,7);
                sum+=atoll(s.c_str());
                }
            }

    }


    return 0;
}
