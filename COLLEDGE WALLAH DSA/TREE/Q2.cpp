//METHOD 2 TO CREATE A TREE
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
    if(x==-1){
        return NULL;
    }
    Node* temp=new Node(x);
    cout<<"Enter the left child of "<<x<<": ";
    temp->left=binary_tree();
    cout<<"Enter the right child of "<<x<<": ";
    temp->right=binary_tree();
    return temp;
}
int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root=binary_tree();
}
