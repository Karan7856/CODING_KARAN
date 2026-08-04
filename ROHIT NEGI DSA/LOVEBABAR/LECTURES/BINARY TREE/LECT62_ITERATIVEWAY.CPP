// ITERATIVE WAY OF TRAVERSAL
// THERE ARE TWO ITERATIVE WAYS OF TRAVERSAL
// 1) NAIVE APPROACH-->O(N) T.C O(N) S.C
#include <iostream>
#include <stack>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(Node* root)
{
    // CREATE ROOT NODE
    int data;
    cin >> data;
    if(data==-1){
        return NULL;
    }
    root = new Node(data);

    cout << "Enter the left child of " << root->data << ": ";
    root->left = buildTree(root->left);
    cout << "Enter the right child of " << root->data << ": ";
    root->right = buildTree(root->right);

    return root;
}
void preorderTraversal(Node* root){
    //CREATE A STACK
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* temp=st.top();
        st.pop();
        cout<<temp->data<<" ";
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
    }
}
void inorderTraversal(Node* root){
    
}
int main()
{
    Node* root = NULL;
    root = buildTree(root);
    preorderTraversal(root);

}