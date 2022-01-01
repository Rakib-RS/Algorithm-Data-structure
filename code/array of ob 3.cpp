#include<bits/stdc++.h>
using namespace std;
class arr{
    int a;
    int b;
public:
    arr(int n,int m){
        a=n;
        b=m;

    }
    void get(){

        cout<<a;
    }
   int getb(){

        return b;
    }
    ~arr(){};

};
int main(){
    arr ob[1]={arr(1,2)};//1d array of object.//arr(1,2);
    int i,j;
   cout<<ob[0].get();
   cout<<i;
    for(i=0;i<1;i++){

            cout<<ob[i].get();
            cout<<" "<<ob[i].getb()<<endl;
    }
        //cout<<ob[i].get()<<endl;

}

