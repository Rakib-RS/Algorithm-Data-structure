#include<iostream>
using namespace std;
#define SIZE 1000
class Queue{
    private:
        int items[SIZE];
        int front;
        int rear;
    public:
        Queue(){
            front =-1;
            rear = -1;
        }
        bool isEmpty(){
            if(front == -1) return true;
            else return false;
        }
        void push(int data){
            if(front == -1) front = 0;
            rear++;
            items[rear] = data;
        }
        void pop(){
            if(front>= rear){
                front = -1;
                rear = -1;
            }
            else{
                front++;
            }
        }
        int top(){
            return items[front];
        }

};
template<typename T>class vectorClass{
    T* arr;
    int current;
    int capacity;
    public:
        vectorClass(){
            arr = new T[1];
            current = 0;
            capacity =1;
        }
        void push(T data){
            if(current == capacity){
                T* temp = new T[2*capacity];
                for(int i =0;i<capacity;i++){
                    temp[i] = arr[i];
                }
                capacity = 2*capacity;
                delete[] arr;
                arr = temp;

            }
            arr[current] = data;
            current++;
        }
        void pop(){
            current--;
        }
        int size(){
            return current;
        }
        T get(int index){
            return arr[index];
        }
};
vectorClass<int> edge[100];
bool visited[100] = {};
int level[100] ={};
void bfs(int source){
    Queue q;
    q.push(source);
    visited[source] = true;
    int node,i,k;
    while(!q.isEmpty()){
        node = q.top();
        q.pop();
        for(i =0 ;i<edge[node].size();i++){
            k = edge[node].get(i);
            if(!visited[k]){
                q.push(k);
                visited[k] = true;
                level[k] = level[node] +1;
            }

        }

    }

}
int main(){
    int u,v,i;
    for(i = 0;i<6;i++){
        cin>>u>>v;
        edge[u].push(v);
    }
    bfs(1);
    for(i=0;i<=8;i++){
        cout<<i<<" "<<level[i]<<endl;
    }
    return 0;
}
