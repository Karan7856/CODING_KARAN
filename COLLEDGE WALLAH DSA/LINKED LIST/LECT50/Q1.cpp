//REVERSAL OF K NODES IN LINKED LIST
#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtTail(Node* &head,int data){
    Node* new_node=new Node(data);
    if(head==NULL){
        head=new_node;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            
            temp=temp->next;
            
            
        }
        temp->next=new_node;
    }
    
}
Node* ReverseK(Node* &head,int k){  //reeversing frist k nodes
    Node* prev=NULL;
    Node* curr=head;
    int count=0;
    while(curr!=NULL&&count<k){
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
        
    }
    //when the while loop is over our curr pointer will give us (k+1)th node
    if(curr!=NULL){
        Node* new_head=ReverseK(curr,k);
        head->next=new_head;
        
    }
    return prev; //our prev pointer will give the head of connected linked list 
    
}
void print(Node*  &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}


int main(){
    Node* head=NULL;
    int n;
    cout<<"Enter the size of the Linkked List: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        InsertAtTail(head,m);
    }
    print(head);
    cout<<endl;
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    head=ReverseK(head,k);
    print(head);
    
}