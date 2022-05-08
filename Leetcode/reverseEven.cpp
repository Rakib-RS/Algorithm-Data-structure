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
void swapNode(ListNode* head,int i,int k,int data[],int ct, ListNode* p,int step){
    if(ct == step){
        int j;
        for(j =0;j<ct;j++){
            cout<<data[j]<<" ";
          
        }
         cout<<endl;
        j = ct;
        while(j--){
            //cout<<p->val<<" v";
            p->val = data[j];
            p = p->next;

        }
        ct = 0;
        step = step*2;
       
    }
    if(!head) return;
    if(ct == 0) p = head;
   // cout<<head->val<<"_"<<ct<<endl;
     
    data[ct] = head->val;
    swapNode(head->next,i+1,k,data,ct+1,p,step);
    //cout<<"i = "<<i<<endl;

}

int main(){
    ListNode* root = newNode(2);
    root->next = newNode(3);
    ListNode* r = root->next;
    r->next = newNode(4);
    ListNode* r2 = r->next;
    r2->next = newNode(5);
    r2->next->next = newNode(6);
    print(root);
    cout<<endl;
    int data[10];
    swapNode(root,1,1,data,0,NULL,1);
    cout<<endl;
    print(root);

    return 0;
}