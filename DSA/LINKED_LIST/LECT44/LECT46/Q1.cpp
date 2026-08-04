//K-REVERSAL OF LL
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
    Node* temp=head;
    if(head==NULL){
        head=new_node;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    
}
void ReverseNode(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        
        curr=forward;
    }
    head=prev;
}
int Middle(Node* head,int n){
    Node* temp=head;
    int count=0;
    int mid=n/2;
    while(count<mid){
        temp=temp->next;
        count++;
        
    }
    return temp->data;
}
Node* kReverse(Node* head,int k){
    //base call
    if(head==NULL){
        return NULL;
    }
    //step1 revverse first k nodes
    Node* forward=NULL;
    Node* prev=NULL;
    Node* curr=head;
    int count=0;
    while(curr!=NULL&&count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
        
        
    }
    //step2 reccursion dekh lega
    if(forward!=NULL){
        head->next=kReverse(forward,k);
    }
    return prev;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    
}
int main(){
    Node* head=NULL;
    int n;
    cout<<"Enter the number of elements in node: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        InsertAtTail(head,m);
    }
    print(head);
    ReverseNode(head);
    cout<<endl;
    cout<<"Reverse the List: ";
    print(head);
    cout<<"The Middle element is: ";
    cout<<Middle(head,n);
    //print(head);
    cout<<endl;
    int k;
    cin>>k;
    head=kReverse(head,k);
    //kReverse(head,k);
    print(head);
}