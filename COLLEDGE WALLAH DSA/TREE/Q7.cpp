//COUNT NUMBER OF NON LEAF NODES
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
int count_nonleaf(Node* root){
    if(root==NULL){
        return 0;
        
    }
    if(!root->left&&!root->right){
        return 0;
    }
    return(1+count_nonleaf(root->left)+count_nonleaf(root->right));
}
int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root=binary_tree();
    int count=count_nonleaf(root);
    cout<<"The number of nonleaf nodes in the binary tree is: "<<count-1;
}