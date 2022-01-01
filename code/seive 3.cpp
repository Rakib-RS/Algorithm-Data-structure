#include<stdio.h>
#include<iostream>
#include<math.h>
#define MAX 10000009
#define MAX_N 700000
using namespace std;
bool flag[MAX];
int prime[MAX_N];
void sive()
{
    int i,j,k,r,total=1;
    flag[0]=flag[1]=1;
    prime[total]=2;

    for(i=3;i<MAX;i+=2)
    {
        if(!flag[i])
        {
            prime[++total]=i;
            r=i*2;
            if(MAX/i>=i)for(j=i*i;j<MAX;j+=r)flag[j]=1;
        }
    }
    for(i=1;i<=1000;i++)
        cout<<prime[i]<<endl;
}
int main(){

    sive();
    return 0;
}
