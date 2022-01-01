#include<bits/stdc++.h>
using namespace std;
class arr{
    int a;
    int *p;
    int i;
    int x;
public:
    arr(int n){
        a=n;
        try{

        p=new int[n];

        }
        catch(bad_alloc xa){
            cout<<"allocaton failure"<<endl;
            exit(EXIT_FAILURE);

        }

    }
    void set();
    void get();
    ~arr(){
        delete []p;
    }

};
void arr::set(){

    for(i=0;i<a;i++){

        cin>>x;
        p[i]=x;
    }

}
void arr::get(){
    for(i=0;i<a;i++){

        cout<<p[i]<<endl;
    }

}

int main(){
    arr ob(5);
    ob.set();
    ob.get();
    return 0;



}

