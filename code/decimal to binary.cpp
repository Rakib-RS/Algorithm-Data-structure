#include<bits/stdc++.h>
using namespace std;
    //void binary(unsigned int);

 main()
{
    long long int num;
    scanf("%d",&num);
    unsigned int mask=32768;
    int a[5]={0};

    while(mask > 0)
   {
        if((num & mask) == 0 )
         printf("0");
        else
         cout<<1;
        mask = mask >> 1 ;
   }
   //cout<<a[1]<<endl;

    return 0;
}
