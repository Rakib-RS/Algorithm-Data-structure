#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s;
    int i,j,k,ans,r1,r2,sum1,sum2;
    while(getline(cin,s1)&&getline(cin,s2)){
            r1=r2=0;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        for(i=0;i<s1.size();i++){
            if(s1[i]>='a'&&s1[i]<='z')
                r1+=s1[i]-'a'+1;
        }
        for(i=0;i<s2.size();i++){
            if(s2[i]>='a'&&s2[i]<='z')
                r2+=s2[i]-'a'+1;
        }
        while(1){
            sum1=0;
            while(r1>9){
                sum1+=r1%10;
                r1=r1/10;
            }
            r1=sum1+r1;
            if(r1<10)
                break;
        }
        while(1){
            sum2=0;
            while(r2>9){
                sum2+=r2%10;
                r2=r2/10;
            }
            r2=sum2+r2;
            if(r2<10)
                break;
        }
        double rat=0;
        if(r1>r2)
            rat=(r2*100.0)/r1;
        else rat = (r1*100.0)/r2;
        printf("%.2lf %%\n",rat);
    }

    return 0;
}
