#include<iostream>
using namespace std;
template <typename T>class vectorClass{
    T* arry;
    int current;
    int capacity;
    public :
    vectorClass(){
        arry = new T[1];
        capacity = 1;
        current = 0;
    }
    void push(T data){
        if(current == capacity){
            T* temp = new T[capacity*2];
            for(int i = 0;i<capacity;i++){
                temp[i] = arry[i];
            }
            delete[] arry;
            capacity = capacity *2;
            arry = temp;
        }
        arry[current] = data;
        current++;
    }
    void push(T data, int index){
        if(index = capacity) push(data);
        else arry[index] = data;
    }
    T get(int index){
        if(index<current)
          return arry[index];
    }
    void pop(){
        current--;
    }
    int size(){
        return current;

    }
    int getCapacity(){
        return capacity;
    }
    void print()
	{
		for (int i = 0; i < current; i++) {
			cout << arry[i] << " ";
		}
		cout << endl;
	}

};
int main(){
    vectorClass<int>vc;
    vc.push(10);
    vc.push(20);
    vc.push(30);
    vc.print();
    for(int i =0; i<vc.size();i++){
        int a = vc.get(i);
        cout<<a<<" ";
    }


    return 0;
}
