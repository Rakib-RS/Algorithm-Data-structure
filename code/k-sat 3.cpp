#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,k,n,m,b,t,test,c,p;
   /* freopen("txt.txt","r",stdin);*/
    cin>>t;test=1;
    while(t--){
        cin>>n>>m>>k;
        getchar();
        string s[50000],s1,s2,a,s4;
        for(i=1;i<=n;i++){
            getline(cin,s[i]);
        }
        cin>>p;
        getchar();
        getline(cin,a);b=0;
        for(i=1;i<=n;i++){ b=0;
            for(j=0;j<a.size();j++){
                 if(a[j]==' ') continue ;
                s1=a[j];
                if((a[j+1]!=' ')&&(j+1<a.size())){
                            s1+=a[j+1];j++;
                        }
                s1="+"+s1;
                    if(s[i].find(s1)!=string::npos){
                            b=1;break;
                    }
                    else b=0;
            }
            if(b==0){
                    for(j=0;j<a.size();j++){
                        if(a[j]==' ') continue;
                        s2=a[j];if((a[j+1]!=' ')&&(j+1<a.size())){
                            s2+=a[j+1];j++;
                        }
                        cout<<s[i]<<endl;
                        if(s[i].find("-")!=string::npos){
                                b=1;cout<<b<<endl;
                            if(s[i].find(s2)!=string::npos){
                                b=0;
                                string::size_type l=s[i].find(s2);
                                s[i].erase(l,s2.size());
                                /*if(j+1<a.size()){
                                    b=1;break;
                                }*/
                            }

                    }
                    /*if(s[i].find("-")!=string::npos)
                                b=1;*/
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

