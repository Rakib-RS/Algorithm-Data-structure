#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;

};
struct ListNode* newNode(int val){
    ListNode* node = new ListNode();
    node->val = val;
    node->next = NULL;
    return node;

};
ListNode* rootf;
void print(ListNode* root){
    if(!root) return;
    cout<<root->val<<" ";
    print(root->next);
}
void swapNode(ListNode* head,int i){
    if(!head) return;
    ListNode* p = head;
    ListNode* c = head->next;
    swapNode(head->next,i+1);
    if(c){
        cout<<i<<" "<<p->val<<" "<<c->val<<endl;
        if(i%2==1){
            swap(c->val,p->val);
        }
    }
    // if(c && i%2==0){
    // cout<<c->val<<" "<<p->val;
    // swap(c->val,p->val);
    // rootf = c;
    // }

}

int main(){
    ListNode* root = newNode(2);
    root->next = newNode(3);
    ListNode* r = root->next;
    r->next = newNode(4);
    ListNode* r2 = r->next;
    r2->next = newNode(5);
    print(root);
    cout<<endl;
    swapNode(root,1);
    cout<<endl;
    print(root);

    return 0;
}