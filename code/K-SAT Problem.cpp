#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,k,n,m,b,t,test,c;
    freopen("txt.txt","r",stdin);
    cin>>t;test=1;
    while(t--){
        cin>>n>>m>>k;
        getchar();
        string s[50000],s1,s2,a,s4;
        for(i=1;i<=n;i++){
            getline(cin,s[i]);
        }
        getline(cin,a);b=0;
        for(i=1;i<=n;i++){
                c=0;b=0;
            for(j=0;j<a.size();j++){
                    if(a[j]==' ') continue ;
                s1=a[j];s2="-"+s1;s4=s1;
                s1="+"+s1; cout<<s1<<endl;
                if(s[i].find(s4)!=string::npos){
                if(s[i].find("+")!=string::npos){
                    if(s[i].find(s1)!=string::npos){
                           /* cout<<"ami"<<i<<endl;*/
                        b=1; break;
                    }

                }
                 if(b==0&&(s[i].find("-")!=string::npos)){
                    if((s[i].find(s2)==string::npos)&&c==0){
                            /*cout<<"ami"<<i<<endl;*/
                        b=1;break;
                    }
                    else {
                        b=0;
                    }
                }
                }

            }
            if(b==0) break;
        }
        if(b)
            printf("Case %lld: Yes\n",test);
        else printf("Case %lld: No\n",test);
        test++;
    }
    return 0;
}
