//queue implementation
#include<iostream>
using namespace std;
# define SIZE 10
class Queue{
    private :
    int items[SIZE],front,rear;
    public :
    Queue(){
        front = -1;
        rear = -1;
    }
   bool isEmpty(){
        if(front == -1)
            return true;
        else return false;
    }
   bool isFull(){
        if(front == 0 && rear == SIZE -1)
            return true;
        else return false;
   }
   void push(int data){
        if(isFull()){
            return;
        }
        if(front == -1) front = 0;
        rear++;
        items[rear] = data;
   }
   void pop(){
        if(isEmpty()) return;
        if(front >= rear){
            front = -1;
            rear = -1;
        }
        else{
            front ++;
        }
   }
   int display(){
        if(isEmpty()) return -1;
        return items[front];
   }

};
int main(){
        Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.isEmpty()){
        int a;
        a = q.display();
        cout<<a<<endl;
        q.pop();
    }
    return 0;
}
