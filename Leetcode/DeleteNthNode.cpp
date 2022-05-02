#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
}; 
ListNode* newNode(int val){
    ListNode* node = new ListNode;
    node->val =  val;
    node->next = NULL;
    return node;
}
stack<int>st;
int stsize = 0;
void print(ListNode* root){
    if(!root) return;
    stsize++;
    cout<<root->val<<" ";
    print(root->next);
}
void reorderL(ListNode* head,int i,int n){
    if(!head){
        return;
    }
   
    if(i==(stsize-n)){
        ListNode* next = head->next->next;
        head->next = next;
        return;
    }
    reorderL(head->next,i+1,n);
}

int main(){
    struct ListNode* root = newNode(1);
    ListNode* r;
    ListNode* s;
    root->next = newNode(2);
    r = root->next;
    r->next = newNode(3);
    s = r->next;
    s->next = newNode(4);
    s->next->next = newNode(5);
    print(root);
    cout<<endl;
     if((stsize-5)==0){
        root = root->next;
        
    }
    //reorderL(root,1,5);
    cout<<endl;
    if(stsize ==1) root =NULL;
    print(root);
    cout<<endl;
   

    return 0;
}