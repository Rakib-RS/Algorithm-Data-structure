#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,i=1,n,j,c=0,k,l,m1,m2,d1,d2,y1,y2,l1,l2;
    string s1,s2,s3,s4;
    char *p1,*p2;
    scanf("%lld",&t);
    getchar();
    while(t--){
        getline(cin,s1);
        getline(cin,s2);
        s3=s1;s4=s2;d1=0;d2=0;m1=0;m2=0;c=0;int d3=0;
        d1=s1.find("January");
        if(d1==string::npos)
            d1=s1.find("February");
        d2=s2.find("January");
        if(d2!=string::npos) d3=1;
        if(d2==string::npos){
            d2=s2.find("February");
            if(d2!=string::npos){
                    d3=1;
                d3=s2.find("February 29");
                if(d3!=string::npos)
                    d3=0;
            }
        }
        for(j=0;j<s1.size();j++){
                m1++;
                if(s1[j]==',')
                    break;
        }
        for(j=0;j<s2.size();j++){
                m2++;
                if(s2[j]==',')
                    break;
        }
        s3.erase(0,m1+1);
        s4.erase(0,m2+1);
        y1=atoll(s3.c_str());
        y2=atoll(s4.c_str());
        if(d1==string::npos)y1++;
        if(d3)y2--;
        if(y2>=y1){
        if((y1%4==0&&y1%100!=0)||(y1%400==0))c=1;
        }
        l1=y1/4-y1/100+y1/400;
        l2=y2/4-y2/100+y2/400;
        if(y2>y1)
        c+=l2-l1;
        printf("Case %lld: %lld\n",i,c);
        i++;

    }
    return 0;

}
