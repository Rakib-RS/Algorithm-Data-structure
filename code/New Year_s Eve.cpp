#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,i,j,s,m1,m2,c,d,m,mi;
    cin>>a>>b;
    m=max(a,b);
    mi=min(a,b);
    if(m%2==0){
        if(mi%2==0)mi--;
    }
    else {
            if(mi%2!=0)mi--;

    }
    for(i=m;;i=i-2){
        j=i;m1=0;
        while(j>0){
            if((j&1)!=0)
                m1++;
        }
        if(m1==1)
            break;
    }
    d=i;

    if(mi>=i) c=i-1;
    else{
        for(i=mi;;i=i-2){
            j=i;m1=0;
            while(j>0){
                if((j&1)==0)
                    m1++;
            }
            if(m1==0)
                break;
        }
        c=i;
    }
    s=c^d;
    cout<<s<<endl;

    return 0;
}

