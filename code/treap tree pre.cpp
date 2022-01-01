#include<bits/stdc++.h>
using namespace std;
struct node{
    int b,h;
    node *left ,*right;

};
node * makeNode(int k){
    node *x = (node *)malloc(sizeof(node));
    x->b=k;
    x->h=rand();
    x->left=x->right=NULL;
    return x;
}
void split(node *T,node **L,node **R,int x){
    node *TL,*TR;
    if(T==NULL){
        *L=NULL;
        *R=NULL;
        return;
    }
    if(T->b<x){
        split(T->right,&TL,&TR,x);
        T->right=TL;
        *L = T;
        *R = TR;
    }
    else{
        split(T->left,&TL,&TR,x);
        T->left=TR;
        *L=TL;
        *R=T;
    }


}
void print(node *T){
    if(T==NULL) return;
    print(T->left);
    cout<<T->b<<endl;
    print(T->right);

}

int main(){
    int i,j;
    node tree;
   node *T = makeNode(3);
   printf("printing tree\n");
   print(T);
   node *l,*r;
   split(T,&l,&r,4);
   printf("printing l\n");
   print(l);
   printf("printing r\n");
   print(r);


    return 0;
}
