#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,s,i,j,mx,mi,l,r,k;
    string s1,s2;
    vector<int>vc,vc1;
    int ar[100005];s1="0";
    vc.push_back(0);
    for(i=1;i<=100005;i++){
        vc1.push_back(i);
    }
    while(1){
        scanf("%d%d",&s,&b);
        if(s==0&&b==0)
            break;
            vc=vc1;
        j=b+1;mx=1;mi=1;
        while(j--){
                if(j==0){
                    printf("-\n");
                    break;
                }
                scanf("%d%d",&l,&r);
                vector<int>::iterator l1,h2,h3;
                l1=lower_bound(vc.begin(),vc.end(),l);
                mi=l1-vc.begin()-1;
                h2=upper_bound(vc.begin(),vc.end(),r);
                mx=h2-vc.begin();
                i=vc[mi];
                k=vc[mx];
               /* cout<<"i="<<i<<endl;
                cout<<"k="<<k<<endl;*/
                int hi=vc.end()-vc.begin();
                 if(i<l&&i!=0)
                    printf("%d ",i);
                    else printf("* ");
                if(k<=s)
                    printf("%d\n",k);
                    else printf("*\n");
                vc.erase(vc.begin()+mi+1,vc.begin()+mx);
        }
    }
    return 0;
}
