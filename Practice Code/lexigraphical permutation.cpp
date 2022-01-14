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
    int i,j;
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
    //sort(s.begin(),s.end());
    permutation(s,0,s.length()-1);
    for(i = 0; i<6;i++){
        cout<<endl<<per[i];
    }
    string lexico[120],temp;
    for(i = 0 ;i<6;i++){
        for(j = i+1 ;j<6;j++){
            if(per[i]>per[j]){
                temp = per[i];
                per[i] = per[j];
                per[j] = temp;
            }
        }
    }
    cout<<"\n ---------------lexicographical order \n";
    for(i = 0; i<6;i++){
        cout<<endl<<per[i];
    }
    return 0;

}

