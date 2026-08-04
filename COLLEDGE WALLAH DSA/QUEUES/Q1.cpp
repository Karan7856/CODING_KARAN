//LECT 57
//LINKED LIST IMPLEMENTATION OF QUEUES
//T.C O(1) 

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
class Queue{
    Node* head;
    Node* tail;
    int size;
public:
    Queue(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }
    void enqueue(int data){
        Node* new_node=new Node(data);
        if(this->head==NULL){
            //L.L is empty
            this->head=this->tail=new_node;
        }
        else{
            //HEAD IS POINTING TO FRONT AND TAIL IS POINTING TO BACK
            this->tail->next=new_node;
            this->tail=new_node;
        }
        this->size++;
    }
    void dequeue(){
        if(this->head==NULL){
            return;
        }
        else{
            Node* old_head=this->head;
            Node* new_head=this->head->next;
            this->head=new_head;
            if(this->head==NULL){
                this->tail==NULL;
            }
            old_head->next=NULL;
            delete old_head;
            this->size--;
        }
    }
    int get_size(){
        return this->size;
    }
    bool is_empty(){
        return this->head==NULL;
    }
    int get_front(){
        return this->head->data;
    }
};
int main(){
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.enqueue(50);
    cout<<qu.get_size()<<endl;
    qu.dequeue();
    cout<<qu.get_size()<<endl;
    while(not qu.is_empty()){
        cout<<qu.get_front()<<endl;
        qu.dequeue();
        
    }
    
}