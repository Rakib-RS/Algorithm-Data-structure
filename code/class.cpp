#include<bits/stdc++.h>
using namespace std;
class Student{
private:
    int scores[5];
    int j,sum=0;
public:
    void input(){
        for(j=0;j<5;j++){
            cin>>scores[j];
            sum+= scores[j];
        }

    }
    int calculateTotalScore(){

        return sum;
    }

};
int main(){
    Student st = new Student;
    int i;
    cin>>i;
    for(i=0;i<1;i++){
        st[i].input();
    }
    st[0].input();
    int total = st[0].calculateTotalScore();
    cout<<total;
    return 0;
}
