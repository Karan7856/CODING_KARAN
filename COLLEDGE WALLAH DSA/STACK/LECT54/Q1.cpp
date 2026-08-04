//CREATION OF A STACK WITH THE HELP OF ARRAY
#include <iostream>
#include <climits>
using namespace std;
class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int capacity){
        this->capacity=capacity;
        arr=new int[capacity];
        this->top=-1;
        
    }
    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"overflow"<<endl;
            return;
            
        }
        this->top++;
        this->arr[this->top]=data;
    }
    int pop(){
        if(this->top==-1){
            cout<<"Underflow"<<endl;
        }
        this->top--;
        return INT_MIN;
    }
    int gettop(){
        if(this->top==-1){
            cout<<"UnderFlow"<<endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }
    bool isEmpty(){
        return this->top==-1;
    }
    int size(){
        return this->top+1;
    }
    bool isFull(){
        return this->top==this->capacity-1;
    }
};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // cout<<st.gettop()<<endl;
    // st.push(5);
    // st.push(6);
    // cout<<st.gettop()<<endl;
    // cout<<"The new top is: ";
    // st.pop();
    // cout<<st.gettop()<<endl;
    st.push(5);
    st.push(6);
}