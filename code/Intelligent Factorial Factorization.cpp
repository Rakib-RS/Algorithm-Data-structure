#include<bits/stdc++.h>
using namespace std;
map<int,int>vc,vc1;
void primefac(int n);
int main(){
    int i,t,tc=1,n,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("Case %d: %d =",tc++,n);
        vc1.clear();
        primefac(n);
        s=vc1.size();
        for(i=2;;i++){
            if(s==0) break;
            if(vc1[i]){
                if(s>1)
                    printf(" %d (%d) *",i,vc1[i]);
                else printf(" %d (%d)",i,vc1[i]);
                s--;
            }

        }
        printf("\n");
    }
    return 0;
}
void primefac(int n){
    int i,j,k,c=2;
    for(i=2;i<=n;i++){
        j=i;
        while(j%2==0){
            vc1[2]++;
            j/=2;
        }
        k=3;
        while(k*k<=j){
            if(j%k==0){
                vc1[k]++;
                j/=k;
            }
            else k+=2;
        }
        if(j!=1)
        vc1[j]++;
    }

}
