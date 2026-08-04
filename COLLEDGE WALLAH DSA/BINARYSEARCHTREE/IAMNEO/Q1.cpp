// Ravi is creating a binary search tree to store unique scores from a recent game. He needs a function to insert each score into the tree and another to display the scores in post-order traversal. 



// Write a program that continuously takes positive integers as input, adds them to the tree, and prints the post-order traversal when input ends.

// Input format :
// The input consists of a sequence of positive integers, each representing a node's score value. The sequence ends when -1 is entered.

// Output format :
// The output displays the postorder traversal of the constructed binary search tree.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// 1 ≤ score value ≤ 1000

// Sample test cases :
// Input 1 :
// 6 3 1 4 2 -1
// Output 1 :
// 2 1 4 3 6 
// Input 2 :
// 1 7 9 5 6 -1
// Output 2 :
// 6 5 9 7 1 

// You are using GCC
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
    }
};
Node* insert(Node* root,int element){
    if(root==NULL){
        Node* temp=new Node(element);
        return temp;
    }
    if(element<root->data){
        root->left=insert(root->left,element);
    }
    if(element>root->data){
        root->right=insert(root->right,element);
    }
    return root;
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=NULL;
    int element;
    while(true){
        cin>>element;
        if(element==-1){
            break;
        }
        root=insert(root,element);
    }
    postorder(root);
    
}