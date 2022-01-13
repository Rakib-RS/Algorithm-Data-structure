#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int *a,int *b){
   int temp;
   temp = *a ;
   *a = *b;
   *b = temp;

}
int main(){
    int a[]={4,5};
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    swap(&a[0],&a[1]);
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    return 0;
}
