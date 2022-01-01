#include<iostream>
#include<cstring>
using namespace std;
string p[100];
class start_end;
class family_information{
    int n;
  public:
      int member=4;
    int inperhead;
    int costperhead;
    string s[100];
    int r=100;
    void save_name();
    void show_name();
     friend void save_money(start_end ,family_information);
};
class family_income:public family_information{
    int a;
   public:
    static int total_earn;
    void earn();
    void th(){ this->a=total_earn; }
    void earn(int n);
    int income(){
        return total_earn;
    }
};
int family_income::total_earn;
class family_cost:public family_income{
    int b;
public:
     static int total_cost;
    void cost();
    void cost(int n);
    void th_cost(){this->b=total_cost;}
    int pay(){
        return total_cost;
    }
};
int family_cost::total_cost;
void family_information ::save_name(){
    cout<<"Enter the name of family Member "<<endl;
    for(int i=0;i<member;i++){
        cin>>s[i];
        p[i]=s[i];
    }
}
void family_information::show_name(){
    cout<<"Show the name of family Member"<<endl;
    for(int i=0;i<member;i++){
        cout<<s[i]<<endl;
    }
}
void family_income::earn(){
    int t;
    cout<<"Enter earn money per person per member"<<endl;
    for(int i=0;i<member;i++){
        cout<<p[i]<<" : ";
        cin>>t;
        total_earn+=t;
    }

}
void family_income::earn(int n){
        total_earn+=n;
    }
void family_cost:: cost(){
    int t;
    cout<<"Enter Cost money per person per member"<<endl;
    for(int i=0;i<member;i++){
        cout<<p[i]<<" : ";
        cin>>t;
        total_cost+=t;
    }

}
void family_cost::cost(int n){
        total_cost+=n;
}
class start_end{
public:
     start_end(){
        cout<<"Acounting is strated for this year"<<endl;
    }

     ~start_end(){
        cout<<"Acount is closed for this year"<<endl;
    }
    int sv_past=100;
    friend void save_money(start_end ,family_information);

};
void save_money(start_end o1,family_information o2){
    int div=o1.sv_past/o2.member;

     cout<<"save money in year per head is "<<div<<endl;
}
void objec_pass(family_information ob);
inline void bike(int a,int b){
    int s=a-b;
    cout<<"Total save money in this year is "<<s<<endl;
}
int main(){
    start_end se;
    family_information inf;
    inf.save_name();
    inf.show_name();
    family_income en[12];family_cost ct[12];
    int a,b,d,i;
    for(i=0;i<1;i++){
        en[i].earn();
        en[i].earn(100);
        ct[i].cost();
        ct[i].cost(100);
    }
    a=en[12].income();
    b=ct[12].pay();
    cout<<"Total income in this year is "<<a<<endl;
    cout<<"Total cost in this year is "<<b<<endl;
    bike(a,b);
    save_money(se ,inf);
    objec_pass(inf);

}
void objec_pass(family_information ob){

    ob.inperhead=2000;
    ob.costperhead=1000;
    cout<<"In come per head as before is "<<ob.inperhead<<endl;
    cout<<"In cost per head as before is "<<ob.costperhead<<endl;

}
