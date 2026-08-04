#include <iostream>
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

void buildTree(Node* root){

    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new Node(data);

    cout<<"Enter the left child of "<<root->data<<": ";
    root->left=buildTree(root->left);
    root->right=buildTree(root->right);
    return root;

}
void levelOrderTraversal(Node* root){
    
}
int main(){

    Node* root=NULL;
    root=buildTree(root);
}