#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* insertInBST(Node* root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data>root->data){
        root->right=insertInBST(root->right,data);
    }
    if(data<root->data){
        root->left=insertInBST(root->left,data);
    }
    return root;
}
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertInBST(root,data);
        cin>>data;
    }
    return;
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return 1+max(left,right);
}
int main(){
    Node* root=NULL;
    insertInBST(root,10);
    takeinput(root);
    postorder(root);
    cout<<endl;
    cout<<"Height of the BST is: "<<height(root)<<endl;
}