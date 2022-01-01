#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,i,r;
    cin>>a>>b>>c;
    if(c==0){
        if(a==b)printf("YES\n");
        else printf("NO\n");
    }
    else{
        i=a%c;
        r=b%c;
        if(i==r)
            printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}

