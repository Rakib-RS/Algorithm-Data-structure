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
int depth;

struct Node* newNode(int val){
    Node* node = new Node ;
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void inorder(Node* root,int level){
    if(root == NULL) return;
    depth = max(level,depth);
    inorder(root->left,level+1);
    
    previous = root;
    inorder(root->right,level+1);
   
}

int main(){
    Node* root = newNode(2);
    root->left = newNode(3);
    root->right = newNode(1);
    first = NULL;
    middle = NULL;
    last = NULL;
    previous = newNode(-1234);
    depth = 0;
    inorder(root,1);
    cout<<depth<<endl;
    return 0;
}