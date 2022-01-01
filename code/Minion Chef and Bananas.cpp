#include<bits/stdc++.h>
using namespace std;
vector<int>vc,sum;
vector<int>::iterator li;
int n;
int nh(int k,int mid){
    int s,h;
    s=sum[n-1]-sum[k-1];
    h=s/mid+k;
    if(s%mid!=0)
        h++;
    return h;
}
int binary(int l,int hi,int h){
    int mid,k,hh,c=0;
    while(l<=hi){
        mid=(l+hi)/2;
        li=upper_bound(vc.begin(),vc.end(),mid);
        k=li-vc.begin();
        hh=nh(k,mid);
        if(hh>h){
            l=mid+1;
        }
        else hi=mid-1;
        c++;
        if(c==10)
            break;
    }
    return l;

}
int main(){
    int t,a,h,l,hi,mid,s,i;
    cin>>t;
    while(t--){
        cin>>n>>h;
        l=n;
        while(l--){
            scanf("%d",&a);
            vc.push_back(a);
        }
        sort(vc.begin(),vc.end());
        s=0;
        for(i=0;i<n;i++){
            s+=vc[i];
            sum.push_back(s);
        }
        l=1;hi=sum[n-1];
        s=binary(l,hi,h);
        cout<<s<<endl;
        vc.clear();
        sum.clear();

    }
    return 0;
}
