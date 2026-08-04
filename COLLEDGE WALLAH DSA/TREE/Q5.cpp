//SUM OF THE NODES OF THE BINARY TREE
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
int sum_tree(Node*root,int &sum){
    if(root==NULL){
        return INT_MIN;
    }
    sum+=root->data;
    sum_tree(root->left,sum);
    sum_tree(root->right,sum);
    return sum;
}

int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root=binary_tree();
    int sum=0;
    int sum1=sum_tree(root,sum);
    cout<<"The sum of the nodes of binary tree is: "<<sum1;
}