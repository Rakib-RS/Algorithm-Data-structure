#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,j,k,s,l;
    string s1[5],s2,a,b,s3;
    int ar[10],br[5];
    ar[0]=1;
    for(i=1;i<8;i++){
        ar[i]=2*ar[i-1];
    }
    scanf("%d",&t);
    i=1;
    while(t--){
        cin>>a>>b;k=7;s=0;l=0;
            for(j=0;j<b.size();j++){
                if(b[j]=='.'){
                        ostringstream st;
                        st<<s;
                        s1[l]=st.str()+'.';
                        k=7;
                        s=0;
                        l++;
                    continue;
                }
                if(b[j]=='1'){
                    s+=ar[k];
                }
                k--;
            }
            ostringstream sb;
                        sb<<s;
                        s1[l]=sb.str();
            s2=s1[0]+s1[1]+s1[2]+s1[3];
            if(a==s2)
                printf("Case %d: Yes\n",i);
            else
                printf("Case %d: No\n",i);
            i++;
    }

}

