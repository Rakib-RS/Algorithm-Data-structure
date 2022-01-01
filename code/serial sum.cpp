#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l,s,a;
    vector<int>vc;
    for(i=1;i<=5;i++){
        scanf("%d",&a);
        cout<<a<<" ";
        vc.push_back(a);
    }
    cout<<endl;k=0;int s1,s2;
    for(i=0;i<5;i++){
            s=0;s1=vc[i];s2=s1;
        for(k=i+1;k<5-1;k++){
            s2+=vc[k];
            s1=s2;
            for(int l=k;l<5-1;l++){
                    if(l>k)
                        s1+=vc[l]-vc[l-1];
            if(l>i){
                s=s1;
            for(j=l;j<5-1;j++){
                if(j>l)
                s+=vc[j]-vc[j-1];
                cout<<"s="<<s<<endl;
            }
            }
            }
        }
        //cout<<"i="<<i<<endl;
    }
    return 0;
}
