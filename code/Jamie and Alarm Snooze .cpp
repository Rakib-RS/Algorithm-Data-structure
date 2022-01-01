#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,h,m,a,b,c=0,d,f,j=1;
    cin>>x>>h>>m;a=h;b=m;
    while(a!=0&&b!=0){
        d=a%10;
        if(d==7){
                j=0;
            break;
        }
        f=b%10;
        if(f==7){
                j=0;
            break;
        }
        a=a/10;
        b=b/10;
    }
    if(j){
        while(1){
                a=h;b=m;
            if(m>=x){
                m=m-x;
                c++;
                b=m;
                d=m%10;
                b=b/10;
                f=b%10;
                if(d==7||f==7)
                    break;
                 d=a%10;
                    a=a/10;
                    f=a%10;
                    if(d==7||f==7){
                        break;
                    }
            }
            else {
                h--;
                m+=60;
            }
            if(h==0){
                h=23;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
