#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,i,j,k,l,n,a,b,ab,f[10000],m;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        scanf("%d%d",&n,&q);
        for(i=0;i<10000;i++)f[i]=0;
        for(i=0;i<q;i++)
        {
            scanf("%d%d%d",&a,&b,&ab);
            m=max(m,ab);
            for(j=a-1;j<=b-1;j++){
                if(f[j]<ab)f[j]=ab;
            }
        }
        for(i=0;i<n;i++){
            if(f[i]==0)f[i]=m+1;
        }
        printf("Case %d: ",k);
        for(i=0;i<n;i++){
            if(i<n-1)printf("%d ",f[i]);
            else printf("%d\n",f[i]);
        }
    }


    return 0;
}
