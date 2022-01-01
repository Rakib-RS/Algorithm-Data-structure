#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,sum=0;
    cin>>n>>m;
    if(n>=m)sum=n-m;
    else if(n==m/2-1){ sum+=n*2-m/2+1;}
    else if(n>m/2){sum=n-m/2+1;n=n-m/2;}
    else if(n<m){
        for(;;){ n*=2;sum++;if(n>=m/2-1)break;

                cout<<n<<endl;
        }
        cout<<n<<endl;
        if(n==m)sum=sum;
       else if(n==m/2-1){ sum+=n*2-m/2+1;}
        else{
        sum+=n-m/2+1;
        cout<<"n is "<<n<<m<<endl;
        }
    }
    cout<<sum<<endl;
    return 0;
}
