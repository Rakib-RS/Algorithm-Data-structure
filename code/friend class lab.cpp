#include<bits/stdc++.h>
using namespace std;
class bus{
    public:
    int s;
    int w;
    friend class com;

};
class truck{
public:
    int s;
    int w;
    friend class com;

};
class car{
public:
    int s;
    int w;
    friend class com;

};
class com{
public:
    void c(bus o1,truck o2,car o3){
        int s=o1.s+o2.s+o3.s;
        int w=o1.w+o2.w+o3.w;
        cout<<s<<" "<<w<<endl;

    }

};
main(){
    bus o1;
    truck o2;
    car o3;
    com cc;
    o1.s=10;
    o2.s=30;
    o3.s=50;
    o1.w=10;
    o2.w=30;
    o3.w=50;

        cc.c(o1,o2,o3);

}







