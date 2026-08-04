//MIDDLE OF A LINKED LIST
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
int getLength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;

    }
    return len;
}
Node* findMiddle(Node* head){
    int len=getLength(head);
    int ans=len/2;
    Node* temp=head;
    int count=0;
    while(count<ans){
        temp=temp->next;
        count++;
    }
    //cout<<"The middle element is: ";
    return temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    
}
int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        InsertAtTail(head,m);
    }
    print(head);
    cout<<endl;
    cout<<"The length of the Linked List: ";

    cout<<getLength(head);
    // cout<<endl;
    // cout<<"The middle element is: "
    Node* mid=findMiddle(head);
    cout<<mid->data;
    
}