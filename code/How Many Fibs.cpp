#include<bits/stdc++.h>
using namespace std;
int main(){
    string s[1000],s1,s2,s3;
    long long int i,j,k,c,n;
    s[0]=1;
    s[1]=2;
    while(1){
        s3='0';
        cin>>s1>>s2;
        for(i=2;;i++){
            s[i]=s[i-2]+s[i-1];
            /*if(s[i]<=s1&&s[i]<=s2)
                s3=s3+'1';*/
            if(s[i]>=s2)
                break;
        }
        cout<<s3<<endl;
    }
    return 0;

}
