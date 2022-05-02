#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
}; 
struct ListNode* newNode(int val){
    ListNode* node = new ListNode;
    node->val =  val;
    node->next = NULL;
    return node;
}
stack<int>st;
int stsize;
void print(ListNode* root){
    if(!root) return;
    cout<<root->val<<" ";
    st.push(root->val);
    print(root->next);
}
void reorderL(ListNode* head,int i){
    if(!head){
        return;
    }
    cout<<i<<" "<<head->val<<" "<<st.size()<<endl;;
    if(i>stsize/2){
        // if(stsize%2==0)
        // head->next = NULL;
        // else head->next = newNode(st.top());
        return;
    }
    ListNode* current = head->next;
    if(i==stsize/2){
    ListNode* node = newNode(st.top());
        st.pop();
        if(stsize%2==0)
        node->next = NULL;
        else node->next = newNode(st.top());
        head->next = node;
        st.pop();
    }
    else{
        ListNode* node = newNode(st.top());
        node->next = head->next;
        head->next = node;
        st.pop();
    }
    reorderL(current,i+1);
    // if(i){
    //     //st.pop();
    //     cout<<st.top()<<" ";
    //     ListNode* node = newNode(st.top());
    //     node->next = head->next;
    //     head->next = node;
    //     st.pop();


    // }
    
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
    //s->next->next = newNode(5);
    print(root);
    cout<<endl;
    stsize = st.size();
    cout<<st.size();
    reorderL(root,1);
    cout<<endl;
    print(root);
    cout<<endl;
   

    return 0;
}