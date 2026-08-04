//CREATION OF A BINARY SERACH TREE
//insertion of element in BST:https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1?page=1&difficulty%5B%5D=0&category%5B%5D=Binary%2520Search%2520Tree&sortBy=submissions
//searching an element in BST:https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Binary%2520Search%2520Tree&sortBy=submissions
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
void inorder_traversal(Node* root){
    if(root==NULL){
        return;
    }
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}
Node* insert(Node* root,int target){
    if(root==NULL){
        Node* temp=new Node(target);
        return temp;
    }
    if(target<root->data){
        root->left=insert(root->left,target);
    }
    else{
        root->right=insert(root->right,target);
    }
    return root;
}
bool searching(Node* root,int value){
    if(!root){
        return 0;
    }
    if(root->data==value){
        return 1;
    }
    if(value<root->data){
        return searching(root->left,value);
    }
    else{
        return searching(root->right,value);
    }
}
int main(){
    int n;
    cout<<"Enter the size of the binary tree: ";
    cin>>n;
    int arr[n]; //6 3 17 5 11 18 2 1 20 14
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* root=NULL;
    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    inorder_traversal(root);
    int value;
    cout<<"Enter the target to be found: ";
    cin>>value;
    cout<<searching(root,value);

}