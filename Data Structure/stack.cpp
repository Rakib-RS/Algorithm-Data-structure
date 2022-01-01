//stack implementation
#include<iostream>
using namespace std;
#define SIZE 10
class Stack {
    private:
        int items[SIZE],top;
    public:
    Stack(){
        top = -1;
    }
    bool isEmpty(){
        if(top == -1)
            return true;
        else return false;
    }
    bool isFull(){
        if(top == SIZE)
            return true;
        else return false;
    }
    void push(int data){
        if(isFull()) return;
        top++;
        items[top] = data;
    }
    void pop(){
        if(isEmpty()) return;
        top--;
    }
    int peek(){
        if(isEmpty()) return -1;
        return items[top];
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(5);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    return 0;
}
