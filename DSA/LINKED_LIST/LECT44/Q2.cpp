// //DELETION OF A NODE FROM ANY POSITION 
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
//     //destructor
//     ~Node() {
//         int value = this -> data;
//         //memory free
//         if(this->next != NULL) {
//             delete next;
//             this->next = NULL;
//         }
//         cout << "memory is free for node with data " << value << endl;
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
// void DeleteNode(int position,Node* &head){
//     if(position==1){
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     else{
//         Node* curr=head;
//         Node* prev=NULL;   //CURRENT NODE IS POINTING TO HEAD AND THE PREVIOUS NODE IS POINTING TO THE NODE PREVIOUS TO CURRENT NODE IN STARTING THE CURRENT NODE WILL BE THE HEAD AND THE PREVIUS NODE WILL BE NOTHING SO PREVIOUS NODE IS NULL
//         int count=1;
//         while(count<position){
//             prev=curr;
//             curr=curr->next;
//             count++;
//         }
//         //AT THIS TIME THE CURRENT NODE HAS REACHED TO THE DESIRED POSITION
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;  //FREE THE CURRENT NODE
//     }
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
//     DeleteNode(3,head);
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
//     ~Node(){
//         int value=this->data;
//         if(this->next!=NULL){
//             delete next;
//             this->next=NULL;
//         }
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
// void InsertAtPosition(Node* head,int data,int position){
//     Node* new_node= new Node(data);
//     if(position==0){
//         InsertAtHead(head,data);
//         return;
//     }
//     Node* temp=head;
//     int count=0;
//     while(count!=position-1){
//         temp=temp->next;
//         count++;
//     }
//     new_node->next=temp->next;
//     temp->next=new_node;
    
    
// }
// void deleteNode(int position,Node* &head){
//     //deleting first or start node 
//     if(position==1){
//         Node* temp=head;
//         head=head->next;
//         //memory free start node
//         temp->next=NULL;
//         delete temp;
//     }
//     else{
//         int count=1;
//         Node* prev=NULL;
//         Node* curr=head;
//         while(count<position){
//             prev=curr;
//             curr=curr->next;
//             count++;
//         }
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;
        
        
//     }
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
//     cout<<endl;
//     InsertAtPosition(head,99,4);
//     print(head);
//     deleteNode(3,head);
//     cout<<endl;
//     print(head);
// }


// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int value){
//         data=value;
//         next=NULL;
//     }
// };
// void insertAthead(Node* &head,int val){
//     Node* new_node=new Node(val);
//     new_node->next=head;
//     head=new_node;
// }
// void insertAtTail(Node* &head,int val){
//     Node* new_node=new Node(val);
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=new_node;
//     new_node->next=NULL;
    
// }
// void insertAtPosition(Node* &head,int pos,int val){
//     Node* temp=head;
//     int count=1;
//     while(count<pos-1){
//         temp=temp->next;
//         count++;
//     }
//     Node* new_node=new Node(val);
//     // if(temp->next==NULL){
//     //     insertAtTail(head,val);
//     // }
//     while(count<pos){
//         new_node->next=temp->next;
//         temp->next=new_node;
//         return;
//     }
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
// }
// int main(){
//     Node* head=NULL;
//     int n;
//     cout<<"Enter the size of the linked list: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int data;
//         cin>>data;
//         insertAthead(head,data);
//     }
//     print(head);
//     // insertAtTail(head,6);
//     // cout<<endl;
//     // print(head);
//     cout<<endl;
//     insertAtPosition(head,6,6);
//     print(head);
// }

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
Node* delete_node_begin(Node* &head){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* delete_node_end(Node* &head){
    if(head==NULL) {//no node present
        return NULL;
    }
    if(head->next==NULL){
        return NULL;
    }
    Node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    delete (second_last->next);
    second_last->next=NULL;
    return head;
    
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
    // delete_node_begin(head);
    cout<<endl;
    delete_node_end(head);
    print(head);

}