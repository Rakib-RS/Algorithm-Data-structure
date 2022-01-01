#include<bits/stdc++.h>
using namespace std;
int f[10000];
void failure(string pattern){
    f[0]=0;
    int k=1,len=0,len_p=pattern.size();
    while(k<len_p){
        if(pattern[k]==pattern[len])
            f[k++]=++len;
        else{
            if(len) len=f[len-1];
            else f[k++]=0;
        }
    }

}
void kmp(string txt,string pattern){
    int i=0,j=0,ret=-1;
    int len_t=txt.size(),len_p=pattern.size();
    while(i<len_t){
        if(txt[i]==pattern[j]){
            i++;
            j++;
            if(j==len_p){
                ret=i-len_p;
                printf("A match is found %d\n",ret);
                j=f[j-1];
            }
        }
        else{
            if(j)
                j=f[j-1];
            else
                i++;
        }
    }
}
int main(){


    return 0;
}
