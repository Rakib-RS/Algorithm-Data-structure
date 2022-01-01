#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int y2,y1,m1,m2,d1,d2,s1,s2;
    string n1;
    cout<<"Enter your name:"<<endl;
    cin>>n1;
    printf("Today date or calculate year please in:yy/mm/dd: \n");
    scanf("%lld/%lld/%lld",&y2,&m2,&d2);
    printf("Birth date please in:yy/mm/dd: \n");
    scanf("%lld/%lld/%lld",&y1,&m1,&d1);
    s1=y1*365+m1*30+d1;
    s2=y2*365+m2*30+d2;
    s2=s2-s1;
    y2=s2/365;
    s2=s2%365;
    m2=s2/12;
    d2=s2%12;
    cout<<n1;
    printf(" age is:%lld year %lld month %lld day\n",y2,m2,d2);




}
