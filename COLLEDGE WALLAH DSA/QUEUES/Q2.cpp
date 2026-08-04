//ARRAY IMPLEMENTATION OF QUEUE
#include <bits/stdc++.h>
using namespace std;
class Queue{
    int front;
    int back;
    vector<int> v;
    public:
    Queue(){
        this->front=-1;
        this->back=-1;
        
    }
    void enqueue(int data){
        
        v.push_back(data);
        this->back++;
        if(this->back==0){
            this->front=0;
        }
    }
    void dequeue(){
        if(this->front==this->back){  //if we have single element then both head and tail will be equal
            this->front=-1;
            this->back=-1;
            this->v.clear();
        }
        else{
            this->front++;
        }
    }
    int get_front(){
        if(this->front==-1){
            cout<<"The Queue is empty";
            return INT_MIN;
        }
        else{
            return this->v[this->front];
            
        }
    }
    bool is_empty(){
        return this->front==-1;
    }
    
};
int main(){
    Queue qu;
    qu.enqueue(10);
    //cout<<qu.get_front();
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.dequeue();
    while(not qu.is_empty()){
        cout<<qu.get_front()<<endl;
        qu.dequeue();
    }
}