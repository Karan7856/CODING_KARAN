//CREATING A STACK USING A LINKED LIST
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
class Stack{
    Node* head;
    int capacity;
    int currsize;
    public:
    Stack(int capacity){
        this->capacity=capacity;
        this->currsize=0;
        this->head=NULL;
    }
    bool isEmpty(){
        return this->head=NULL;
    }
    bool isFull(){
        return this->currsize==this->capacity;
    }
    void push(int data){
        if(this->currsize==this->capacity){
            cout<<"OverFlow"<<endl;
            return;
        }
        Node* new_node=new Node(data);
        new_node->next=this->head;
        this->head=new_node;
        this->currsize++;
        
    }
    int pop(){
        if(this->head==NULL){
            cout<<"UnderFlow"<<endl;
            //return;
        }
        Node* new_head=this->head->next;
        this->head->next=NULL;
        Node* toberemoved=this->head;
        int result=toberemoved->data;
        delete toberemoved;
        this->head=new_head;
        return result;
        
    }
    int gettop(){
        if(this->head==NULL){
            cout<<"UnderFlow"<<endl;
            //return;
        }
        return this->head->data;
    }
};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.gettop()<<endl;
    st.push(5);
    st.push(6);
    cout<<st.gettop()<<endl;
    cout<<"The new top is: ";
    st.pop();
    cout<<st.gettop()<<endl;
}