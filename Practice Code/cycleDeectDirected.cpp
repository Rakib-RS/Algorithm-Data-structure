#include<iostream>
using namespace std;
template<typename T>class vectorClass{
    T *arr;
    int current;
    int capacity;
    public:
    vectorClass(){
        arr = new T[1];
        current = 0;
        capacity = 1;
    }
    void push(T data){
        if(current == capacity){
            T *temp = new T[2*capacity];
            for(int i = 0;i<capacity;i++){
                temp[i] = arr[i];
            }
            capacity = 2*capacity;
            delete[] arr;
            arr = temp;
        }
        arr[current++] = data;
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
vectorClass<int> graph[100];
bool visited[100]={};
int level[100] ={};
bool cycle(int source,bool *recA){
    visited[source] = true;
    recA[source] = true;
    for(int i =0;i<graph[source].size();i++){
        int k = graph[source].get(i);
        if(!visited[k]&& cycle(k,recA)){
            return true;
        }
        else if(recA[k]) return true;
    }
    recA[source] = false;
    return false;
}
int main(){
    int n,i,s,d;
    cout<<"Enter n:\n";
    cin>>n;
    bool * reacA = new bool[n];
    for(i = 0;i<n;i++){
        cin>>s>>d;
        graph[s].push(d);
        graph[d].push(s);
    }
    bool test;
    test = cycle(0,reacA);
    cout<<test<<endl;
    return 0;
}