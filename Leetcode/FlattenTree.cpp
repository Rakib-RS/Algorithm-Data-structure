#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
struct TreeNode *newNode(int val)
{
    TreeNode *node = new TreeNode;
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void Flatten(TreeNode *root)
{
  if(root == NULL) return;
  Flatten(root->left);
  Flatten(root->right);
  TreeNode* left = root->left;
  TreeNode* right = root->right;
  root->left = NULL;
  root->right = left;
  while(root->right){
      root = root->right;
  }
  root->right = right;
  
}
void preorder(TreeNode *root)
{

    if (root == NULL)
    {
        cout<<"NULL"<< " " ;
        return;
    }
    cout << root->val;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    TreeNode *root = newNode(4);
    root->left = newNode(5);
    root->right = newNode(6);
    Flatten(root);
    cout << endl;
    preorder(root);
    return 0;
}