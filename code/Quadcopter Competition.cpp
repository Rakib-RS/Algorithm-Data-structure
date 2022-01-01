#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,x1,y1,c1,c2,i=0;
    cin>>x>>y>>x1>>y1;
    if(x==0&&y==0&&x1==0&&y1==0){
        i=1;c1=4;
    }
    else{
    if(x1==0||y1==0){
        if(x1==0) x1=-1;
        else y1=-1;
    }
    c1=x-x1;
    if(c1<0) c1=-c1;
    c1++;
    c2=y-y1;
    if(c2<0) c2=-c2;
    c2++;
    c1+=c2;
    }
    if(i==0)
    cout<<c1*2<<endl;
    else cout<<c1*2<<endl;;

    return 0;
}
