// QUEUE
#include <iostream>
#include <queue>
using namespace std;
class Queue
{
public:
    int front;
    int rear;
    int size;
    int *arr;
    Queue(int size)
    {
        this->size = size;
        this->front = 0;
        this->rear = 0;
        arr = new int[size];
    }

    void enqueue(int element)
    {
        // CHECK IF QUEUE IS FULL
        if (rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }

    void dequeue()
    {
        // CHECK IF QUEUE IS EMPTY
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        
        }
        else
        {
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int Front()
    {
        if (front == rear)
        {
            cout << "Queue is  Empty." << endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main()
{

    // STL IMPLEMENTATION
    //  queue<int>q;
    //  q.push(10);
    //  q.push(20);
    //  q.push(30);

    // cout<<"Size of Queue is: "<<q.size()<<endl;

    // q.pop();

    // cout<<"Size of Queue is: "<<q.size()<<endl;

    // cout<<"Front of Queue is: "<<q.front()<<endl;

    // q.pop();
    // q.pop();

    // if(q.empty()){
    //     cout<<"The Queue is empty."<<endl;
    // }
    // else{
    //     cout<<"Queue is not empty."<<endl;
    // }

    // USING ARRAY

    Queue q1(5);
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);

    cout << "The Front is: " << q1.Front() << endl;

    q1.dequeue();

    cout << "The Front is: " << q1.Front() << endl;

    q1.enqueue(60);
    q1.enqueue(70);
}