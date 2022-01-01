#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,s2;
    int i,j,k,a,b,c,t,c2,l;
    cin>>t;
    while(t--){
        cin>>a;
            c=0;s[0]='1';c2=0;s2[0]='1',k=1;l=1;
            for(i=1;;i++){
                for(j=0;j<k;j++){
                    b=s[j]*i+c;
                    s[j]=b%10;
                    c=b/10;
                }
                while(c>0){
                    s[k]=c%10;
                    c/=10;
                    k++;
                }
                for(j=0;j<l;j++){
                    b=s2[j]*a+c2;
                    s2[j]=b%10;
                    c2=b/10;
                }
                while(c2>0){
                    s2[k]=c2%10;
                    c2/=10;
                    l++;
                }
            cout<<s<<endl;
            cout<<s2<<endl;

            reverse(s.begin(),s.end());
            reverse(s2.begin(),s2.end());
            if(s>s2){
                break;
            cout<<i<<endl;
            }
            else {

                reverse(s.begin(),s.end());
                reverse(s2.begin(),s2.end());
            }
        }

    }
    return 0;
}
