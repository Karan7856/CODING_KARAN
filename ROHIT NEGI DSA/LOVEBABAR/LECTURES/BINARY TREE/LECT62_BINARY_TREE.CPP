// BINARY TREE
// CREATION OF A BINARY TREE
#include <iostream>
#include <queue>
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
        this->right = NULL;
        this->left = NULL;
    }
};
Node *buildTree(Node *root)
{
    // BUILD ROOT NODE FIRST
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);

    cout << "Enter the data for left child: " << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for right child: " << endl;
    root->right = buildTree(root->right);
    return root;
}
void buildFromLevelOrder(Node* &root){
    //MAKE ROOT NODE AND PUSH IN QUEUE
    queue<Node*> q;
    cout<<"Emter the root node data: ";
    int data;
    cin>>data;
    root=new Node(data);

    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        cout<<"Enter the left child of "<<temp->data;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new Node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter the right child of "<<temp->data;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new Node(rightdata);
            q.push(temp->right);
        }
    }
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node *root = NULL;
    // root = buildTree(root);
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    inOrderTraversal(root);
    cout<<endl;
    preOrderTraversal(root);
    cout<<endl;
    postOrderTraversal(root);
}