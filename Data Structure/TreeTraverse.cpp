#include<iostream>
using namespace std;
struct Node{
    int value;
    Node *left;
    Node *right;
};
Node* newNode(int value){
    Node *temp = new Node;
    temp->left = NULL;
    temp->right = NULL;
    temp->value = value;
    return temp;
}
void inorder(struct Node *node){
   // node = node->left;
   if(node == NULL) return;
    inorder(node->left);
    cout<<node->value<<" ";
    inorder(node->right);
}
void preorder(struct Node *node){
    if(node == NULL) return;
    cout<<node->value<<" ";
    preorder(node->left);
    preorder(node->right);
}
void postorder(struct Node *node){
    if(node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->value<<" ";
}
int main(){
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    struct Node *right = root->right;
    struct Node *left = root->left;
    left->left = newNode(4);
    left->right = newNode(5);
    cout<<"inorder\n";
    inorder(root);
    cout<<"\n";
    cout<<"preorder\n";
    preorder(root);
    cout<<"\n";
    cout<<"postorder\n";
    postorder(root);
    cout<<"\n";

    return 0;
}