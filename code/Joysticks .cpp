#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c=0;
    cin>>a>>b;
    if(a==1&&b==1) c=0;
    else{
    while(1){
            if(a<=0||b<=0) break;

        if(a>b)
        {
            a-=2;b++;
        }
        else {b-=2;a++;
        }
        c++;
    }
    }

    cout<<c<<endl;

    return 0;
}
