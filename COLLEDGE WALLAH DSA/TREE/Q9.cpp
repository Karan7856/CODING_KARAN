//FIND MAXIMUM ELEMENT IN A LEVEL
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to build the binary tree
Node* binary_tree() {
    int x;
    cin >> x;
    if (x == -1) {
        return NULL;  // Base case: if input is -1, return NULL for no child
    }
    Node* temp = new Node(x);  // Create a new node
    cout << "Enter the left child of " << x << ": ";
    temp->left = binary_tree();  // Recursively build the left subtree
    cout << "Enter the right child of " << x << ": ";
    temp->right = binary_tree();  // Recursively build the right subtree
    return temp;
}

// Function to perform level order traversal and find max at each level
void levelorder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(not q.empty()){
        
        int level_size=q.size();
        
        int level_max=INT_MIN;
        for(int i=0;i<level_size;i++){
            Node* temp=q.front();
            q.pop();
            level_max=max(level_max,temp->data);
            if(temp->left){
                q.push(temp->left);
                
            }
            if(temp->right){
                q.push(temp->right);
                
            }
            
        }
        cout<<"Maximum at this level: "<<level_max<<endl;
    }
}

int main() {
    cout << "Enter the root node: ";
    Node* root = binary_tree();
    cout << "Level order traversal with maximum values at each level:\n";
    levelorder(root);
    return 0;
}