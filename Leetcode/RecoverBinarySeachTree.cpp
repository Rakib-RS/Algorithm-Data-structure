#include<iostream>
using namespace std;
struct Node {
    int val;
    Node* left;
    Node* right;
};
Node* first;
Node* last ;
Node* middle;
Node* previous;

struct Node* newNode(int val){
    Node* node = new Node ;
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    if(previous != NULL && previous->val >= root->val){
        if(!first){
            first = previous;
            middle = root;

        }
        else{
            last = root;
        }
    }
    previous = root;
    inorder(root->right);
   
}
void recoverTree(Node* root){

}
int main(){
    Node* root = newNode(2);
    root->left = newNode(3);
    root->right = newNode(1);
    first = NULL;
    middle = NULL;
    last = NULL;
    previous = newNode(-1234);

    inorder(root);
    cout<<"\n";
    swap(first->val,last->val);
    //cout<<first->val<<endl;
    previous = newNode(-1234);
    inorder(root);
    return 0;
}