// //SIZE OF A BINNARY TREE
// //HINT: USE PREODER TRAVERSAL
// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value){
//         data=value;
//         left=NULL;
//         right=NULL;
//     }
// };
// Node* binary_tree(){
//     int x;
//     cin>>x;
//     if(x==-1){
//         return NULL;
//     }
//     Node* temp=new Node(x);
//     cout<<"Enter the left child of "<<x<<": ";
//     temp->left=binary_tree();
//     cout<<"Enter the right child of "<<x<<": ";
//     temp->right=binary_tree();
//     return temp;
// }
// int size(Node* root,int &count){
//     if(root==NULL){
//         return INT_MIN;
//     }
//     count++;
//     size(root->left,count);
//     size(root->right,count);
//     return count;
// }
// int main(){
//     cout<<"Enter the root node: ";
//     Node* root;
//     root=binary_tree();
//     int count=0;
//     int size1=size(root,count);
//     cout<<"The size of the binary tree is: "<<size1;
// }



//METHOD 2
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
int size(Node* root){
    if(root==NULL){
        return 0;
    }
    return(1+size(root->left)+size(root->right));
}

int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root=binary_tree();
    int size1=size(root);
    cout<<"The size of the binary tree is: "<<size1;
}
