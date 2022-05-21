#include<bits/stdc++.h>
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
vector<vector<int>>ans;
void inorder(Node* root,int level){
    if(root == NULL) return;
    vector<int>v;
    ans.push_back(v);
    ans[level].push_back(root->val);
   
    cout<<root->val<<" ";
    inorder(root->left,level+1);
    inorder(root->right,level+1);
    
   
}

int main(){
    Node* root = newNode(2);
    root->left = newNode(3);
    root->right = newNode(1);
    root->right->left = newNode(4);
    
    inorder(root,0);
    int i,j;
    cout<<endl;
    for(i = 0;i<ans.size();i++){
        for(j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
   
    return 0;
}