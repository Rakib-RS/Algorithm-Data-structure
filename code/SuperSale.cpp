#include<bits/stdc++.h>
using namespace std;

int price[1000],wt[1000];

int sale(int W, int n){
   int i, w;
   int Kn[n+1][W+1];

   for (i = 0; i <= n; i++)

   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               Kn[i][w] = 0;
           else if (wt[i-1] <= w)
                 Kn[i][w] = max(price[i-1] + Kn[i-1][w-wt[i-1]],  Kn[i-1][w]);
           else
                 Kn[i][w] = Kn[i-1][w];
       }
   }

   return Kn[n][W];
}

int main(){
    input();
    int t,n,q;
    int  W;

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            //cin>>price[i]>>wt[i];
            scanf("%d%d",&price[i],&wt[i]);

        }

        scanf("%d",&q)  // number of people
        int sum=0;
        while(q--){
            //
            cin>>W;
            sum+=sale(W, n);
        }

        cout<<sum<<endl;
    }

    return 0;
}
