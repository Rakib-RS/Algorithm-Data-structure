#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t=5,k,ma;
        cin>>t;
        string s1,s2,s3,s4;
        getline(cin,s1);
        for(i=1;i<=t;i++){
            getline(cin,s1);
            getline(cin,s2);
            cout<<s1<<endl;
            cout<<s2<<endl;
            map<char,int>mp,m;
            ma=max(s1.size(),s2.size());
            transform(s1.begin(), s1.end(), s1.begin(), ::toupper);

            cout<<"s1="<<s1<<endl;
            cout<<"s2="<<s2<<endl;

            for(j=0;j<s1.size();j++){
                if(s1[j]==' ')
                    continue;
                mp[s1[j]]++;
            }
            for(j=0;j<s2.size();j++){
                if(s2[j]==' ')
                    continue;
                m[s2[j]]++;
            }
            k=1;
            cout<<s1<<endl;
            cout<<s2<<endl;
            for(j=0;j<ma;j++){
                if(s1[j]==' ')
                    continue;
                if(mp[s1[j]]!=m[s2[j]])
                {
                    printf("%c %c\n",s1[j],s2[j]);
                    k=0;
                    break;
                }
            }
            if(k)
                printf("Case %d: Yes\n",i);
            else printf("Case %d: No\n",i);
        }


    return 0;
}
