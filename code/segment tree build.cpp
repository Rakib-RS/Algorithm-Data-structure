#include<bits/stdc++.h>
using namespace std;
int tree[100],A[100];
void build(int node, int start, int end){
    if(start == end){
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else{
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node+1, start, mid);
        // Recurse on the right child
        build(2*node+2, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node+1] + tree[2*node+2];
        //cout<<tree[node]<<endl;
    }
}
int query(int node, int start, int end, int l, int r){
    if(r < start or end < l){
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r){
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node+1, start, mid, l, r);
    int p2 = query(2*node+2, mid+1, end, l, r);
    return (p1 + p2);
}
void update(int node, int start, int end, int idx, int val){
    if(start == end){
        // Leaf node
        A[idx] = val;
        tree[node] = val;
    }
    else{
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid){
            // If idx is in the left child, recurse on the left child
            update(2*node+1, start, mid, idx, val);
        }
        else{
            // if idx is in the right child, recurse on the right child
            update(2*node+2, mid+1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node+1] + tree[2*node+2];
    }
}
int main(){
    int i,v,j;
    j=1;
    for(i=0;i<=4;i++){
        A[i]=j;
        j+=2;
    }
    build(0,0,4);
    j=query(0,0,4,1,1);
    //update(0,0,3,1,10);
    //j=query(0,0,3,1,1);
    cout<<j<<endl;
    for(i=0;i<9;i++)
        cout<<tree[i]<<endl;
    return 0;
}
