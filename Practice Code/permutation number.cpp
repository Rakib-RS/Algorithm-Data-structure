#include<iostream>
using namespace std;
string per[100];
int index = 0;
void swap(char *a,char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void permutation(string a,int l,int r){
    if(l == r){
        per[index++] = a;
        //cout<<a<<endl;
    }
    for(int i = l;i<=r;i++){
        swap(&a[l],&a[i]);
        permutation(a,l+1,r);
        swap(&a[l],&a[i]);
    }

}
int main(){
    string s = "abc";
    int i;
    cout<<"how many numbers?:";
    int n;
    cin>>n;
    int a[n];
    s = "";
    for(i=0;i<n;i++){
        cin>>a[i];
        //cout<<a[i]<<" ";
        s += a[i] + '0';
    }
    cout<<endl;
    cout<<s<<endl;
    permutation(s,0,s.length()-1);
    for(i = 0; i<6;i++){
        cout<<endl<<per[i];
    }
    return 0;

}
