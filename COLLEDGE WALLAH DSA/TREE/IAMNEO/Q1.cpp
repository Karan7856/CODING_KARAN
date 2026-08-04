// Alice is working on a project where she needs to build a complete binary tree from an array of integers. After constructing the tree, she wants to perform a post-order traversal to retrieve the node values in a specific order. 



// Write a program that takes the number of nodes and the array as input and outputs the post-order traversal of the tree.

// Input format :
// The first line contains an integer n, representing the number of elements in the array.

// The second line contains n space-separated integers, representing the values of the nodes in the binary tree.

// Output format :
// The output displays a single line containing n space-separated integers, which represent the postorder traversal of the binary tree constructed from the input array.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 15

// 1 ≤ array elements ≤ 100

// Sample test cases :
// Input 1 :
// 3
// 1 2 3
// Output 1 :
// 2 3 1 
// Input 2 :
// 5
// 1 2 3 4 5
// Output 2 :
// 4 5 2 3 1 


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
Node* buildTree(int arr[], int n, int index = 0) {
    // Base case: If the index is out of bounds, return null
    if (index >= n) {
        return nullptr;
    }

    // Create a new node with the current element
    Node* root = new Node(arr[index]);

    // Recursively construct the left and right subtrees
    root->left = buildTree(arr, n, 2 * index + 1); // Left child is at 2*i + 1
    root->right = buildTree(arr, n, 2 * index + 2); // Right child is at 2*i + 2

    return root; // Return the constructed tree
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* root=buildTree(arr,n);
    postorder(root);
    
}