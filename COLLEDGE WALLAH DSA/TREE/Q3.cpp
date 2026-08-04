//PREORDER TRAVERSAL //INORDER TRAVERSAL //POSTORDER TRAVERSAL //LEVEL ORDER TRAVERSAL
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
Node* Binary_tree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* temp=new Node(x);
    cout<<"Enter the left child of "<<x<<": ";
    temp->left=Binary_tree();
   
    cout<<"Enter the right child of "<<x<<": ";
    temp->right=Binary_tree();
    return temp;
    
}
void preorder(Node* root){
    if(root==NULL){
        return;
        
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
vector<int> levelorder(Node* root){
    queue<Node*>q;
    q.push(root);
    vector<int> ans;
    Node* temp;
    while(not q.empty()){
        temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left){ //if temp ka left exist then
            q.push(temp->left);
        }
        if(temp->right){  //if temp ka right exist then
            q.push(temp->right);
        }
        
    }
    return ans;
}
int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root=Binary_tree();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelorder(root);
}
