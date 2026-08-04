//CIRCULAR QUEUE
#include<iostream>
using namespace std;
class Queue{
    public:
    int rear;
    int front;
    int* arr;
    int size;
    Queue(int size){
        this->size=size;
        this->rear=-1;
        this->front=-1;
        arr=new int[size];

    }
    void enqueue(int element){
        //CHECK IF QUEUE IS FULL OR NOT
        if(front==0&&rear==size-1||rear==(front-1)%(size-1)){
            cout<<"Queue is full"<<endl;

        }
        //INSERTING OUR FIRST ELEMENT IN QUEUE
        else if(front==-1){
            front=0;
            rear=0;
            arr[rear]=element;

        }
        //WHEN FRONT IS AT ANY OTHER INDEX EXCEPT 0 AND REAR IS AT THE LAST INDEX THEN WE HAVE TO MOVE REAR AT THE 0TH INDEX TO  MAKE IT A CIRCULAR QUEUE
        else if(rear==size-1&& front!=0){
            rear=0;
            arr[rear]=element;
        }
        else{
            rear++;
            arr[rear]=element;
        }
    }

    void dequeue(){
        //CHECK IF QUEUE IS EMPTY OR NOT

        if(front==-1){
            cout<<"Queue is empty.";
        }

        //IF ONLY SINGLE ELEMENT IS PRESENT
        else if(front==rear){
            front=rear=-1;
        }

        //WHEN FRONT IS AT THE LAST INDEX TO MAKE IT A CIRCULAR QUEUE MOVE IT TO THE 0TH INDEX
        else if(front==size-1){
            front=0;

        }
        else{
            front++;
        }
    }


    int Front(){
        //QEUEUE IS EMPTY
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            cout<<endl;
            return arr[front];

        }
    }

};
int main(){
    Queue q2(5);
    q2.enqueue(10);
    q2.enqueue(20);
    q2.enqueue(30);
    q2.enqueue(40);
    q2.enqueue(50);
    cout<<q2.Front();
    q2.dequeue();
    cout<<q2.Front();
    q2.enqueue(60);
    cout<<q2.Front();
    q2.dequeue();
    q2.dequeue();
    q2.dequeue();
    q2.dequeue();
    cout<<q2.Front();
}
