//COUNT THE NUMBER OF LEAF NODES
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
Node* binary_tree(){
    int x;
    cin>>x;
    Node* temp=new Node(x);
    if(x==-1){
        return NULL;
    }
    cout<<"Enter the left child of "<<x<<": ";
    temp->left=binary_tree();
    cout<<"Enter the right child of "<<x<<": ";
    temp->right=binary_tree();
    return temp;
}
int leaf_node(Node* root,int &count){
    if(root==NULL){
        return INT_MIN;
    }
    if(root->left==NULL&&root->right==NULL){
        count++;
        return INT_MIN;
    }
    leaf_node(root->left,count);
    leaf_node(root->right,count);
    return count;
}


int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root=binary_tree();
    int count=0;
    int leaf=leaf_node(root,count);
    cout<<"The number of leaf nodes in binary tree is: "<<leaf;
    
}