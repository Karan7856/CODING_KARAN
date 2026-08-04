//FIND THE HEIGHT OF THE TREE COUNT THE NODES NOT THE EDGES
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
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    return(1+(max(height(root->left),height(root->right))));

}

int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root=binary_tree();
    int h=height(root);
    cout<<h;
}