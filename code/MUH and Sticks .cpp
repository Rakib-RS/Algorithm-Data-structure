#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[8],i,j,k=0,l,c=0,b[5],n=0,d=0;
    for(i=0;i<6;i++)
        cin>>a[i];
    for(i=0;i<6;i++){
            c=0;
        for(j=0;j<6;j++){
            if(a[i]==a[j])
                c++;
        }
        if(k<c){
            k=c;l=a[i];
        }
    }
    if(k>=4){
        for(i=0;i<6;i++){
            if(l!=a[i]){
                b[n++]=a[i];
            }
        }
        if((b[0]==b[1])||k==6)
                cout<<"Elephant"<<endl;
            else cout<<"Bear"<<endl;

    }
    else cout<<"Alien"<<endl;
    return 0;
}
