#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,t,c;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
            cin>>a[i];
        c=0;
        for(i=0;i<n;i++){
            int temp = a[i];
            j=i;
            while(j>0&&temp<a[j-1]){
                a[j]=a[j-1];
                c++;
                j--;
            }
            a[j]=temp;
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
