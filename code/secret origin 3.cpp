 #include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,i,j,n,s,n1,k,r,c;
    double m1;
    cin>>t;
    i=1;
    while(t--){
        cin>>n;n1=n;
       long long int a[100],s1=0,m=1;k=0;s=1;c=0;
        while(n>0){
            r=(n&1);
            cout<<r;
            if(r==1)c++;
            a[k++]=r*m;
            m=m*2;
            n=n>>1;
        }
        }/*
        for(j=0;j<k-1;j++){
               // if(a[j]==0&&a[j+1]>0)
            }
        }
        if(s){
            for(j=0;j<k;j++){
                if(c>1){
                    if(a[j]==0){
                            m1=pow(2,j);
                        a[j]=m1;
                    }
                    c--;
                }
                else a[j]=0;
            }
            m1=pow(2,k);
            a[k]=m1;
            k++;
        }
        s=0;
       for(j=0;j<k;j++)
            s+=a[j];
        cout<<s<<endl;
    }*/

    return 0;
}
