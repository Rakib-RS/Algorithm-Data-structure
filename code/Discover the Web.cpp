#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,j,k,t,b,f;
    string s,s1;
    /*freopen("txt.txt","r",stdin);*/
    i=1;
    scanf("%lld",&t);
    getchar();
    while(i<=t){
            printf("Case %lld:\n",i);
        map<int,string>mp;b=f=j=0;f=0;
        k=0;mp[k]="http://www.lightoj.com/";
        while(1){
            getline(cin,s);
            if(s=="QUIT")
                break;
            else if(s=="BACK"){
                    if(k>0)f++;
                k--;
                if(k<0)
                    printf("Ignored\n");
                else
                 cout<<mp[k]<<endl;
            }
            else if(s=="FORWARD"){
                    if(k<0)k=0;
                if(f==0)
                    printf("Ignored\n");
                else{
                            k++;f--;
                    cout<<mp[k]<<endl;
                }
            }
            else{
                s.erase(0,6);
                f=0;
                    cout<<s<<endl;
                    if(k<0)k=0;
                    k++;
                    mp[k]=s;
            }
        }
        i++;

    }
    return 0;
}
