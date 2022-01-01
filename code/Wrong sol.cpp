#include<bits/stdc++.h>
using namespace std;
int main(){
   int nDay = 110,i,c=0;
   printf("%d\n", nDay);
   for(i=550;;i=i-2){
        if(c==110) {break;}
        if(c<109){printf("%d ",i);}
        else printf("%d\n",i);
        c++;

   }
   return 0;
}
