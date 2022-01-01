#include<bits/stdc++.h>
using namespace std;
class c1{
    int a;
    char *p;
public:
    c1(char *c){
        a=strlen(c);
        try{
            p=new char[100];
        }
        catch(bad_alloc xa){

            exit(EXIT_FAILURE);
        }

        p=c;
    }
    get(){ cout<<p<<endl;}


};
main(){
    c1 ob("rakin");

    ob.get();


}
