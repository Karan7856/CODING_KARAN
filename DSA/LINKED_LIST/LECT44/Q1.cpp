// ///INSERTING NEW NODE AT HEAD AND INSERT AT TAIL AND INSERT AT MIDDLE 
// #include <iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

// };
// void InsertAtHead(Node* &head,int d){
//     Node* node2=new Node(d);
//     node2->next=head;
//     head=node2;
    
// }
// void InsertAtTail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=tail->next;
// }
// void InsertAtMiddle(Node* &tail,Node* &head,int d,int position){
//     Node* temp=head;
//     int count=1;
//     while(count<position-1){
//         temp=temp->next;
//         count++;
//     }
//     if(temp->next==NULL){
//         InsertAtTail(tail,d);
//         return;
//     }
//     Node* newNodetoinsert=new Node(d);
//     newNodetoinsert->next=temp->next;
//     temp->next=newNodetoinsert;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp->next!=0){
//         cout<<temp->data<<" ";
//         temp=temp->next;
        
//     }
//     cout<<endl;
// }
// int main(){
//     Node* node1=new Node(10);   //HERE WE HAVE INITIALISED AS 10 BUT WE CAN USE Node* head=NULL and remove line no 29,32 
//     //cout<<node1->data<<endl;
//     //cout<<node1->next;
//     Node* head=node1;
//     // InsertAtHead(head,12);
//     // print(head);
//     // InsertAtHead(head,14);
//     // print(head);
//     // InsertAtHead(head,16);
//     // print(head);
//     Node* tail=node1;
//     InsertAtTail(tail,12);
//     print(head);
//     InsertAtTail(tail,14);
//     print(head);
//     InsertAtTail(tail,16);
//     print(head);
//     InsertAtMiddle(tail,head,100,4);
//     print(head);
// }

// #include <iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
        
//     }
// };
// void InsertAtHead(Node* &head,int data){
//     Node* new_node=new Node(data);
//     new_node->next=head;
//     head=new_node;
// }
// void InsertAtTail(Node* &head,int data){
//     Node* new_node=new Node(data);
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=new_node;
//     new_node->next=NULL;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//     Node* head=NULL;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int m;
//         cin>>m;
//         InsertAtHead(head,m);
//     }
//     print(head);
//     cout<<endl;
//     int m1;
//     cin>>m1;
//     for(int i=0;i<m1;i++){
//         int m3;
//         cin>>m3;
//         InsertAtTail(head,m3);
//     }
//     print(head);
// }


//INSERTION ONLY AT TAIL
#include <bits/stdc++.h>
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
void insertAtTail(Node* &head,int value){
    Node* new_node=new Node(value);
    if(head==NULL){
        head=new_node;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=NULL;
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
        int data;
        cin>>data;
        insertAtTail(head,data);
    }
    print(head);

}

