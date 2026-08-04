//STACK CREATION
#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:

    int top;
    int* arr;
    int size;
    Stack(int size){
        this->size=size;
        this->top=-1;
        arr=new int[size];
    }

    void push(int element){


        //THIS SHOWS THAT THERE IS SPACE IN STACK
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"No space if left in stack";
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is empty";
        }
        else{
            top--;
        }
    }

    int peek(){

        //if stack is empty;
        if(top>=0&&top<size){
            return arr[top];
        }
        else{
            return -1;
            
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    // stack<int> st;
    // st.push(2);
    // st.push(3);
    // st.push(4);

    // st.pop();

    // //TOP 
    // cout<<"The Top of the stack is: "<<st.top();

    // //IS EMPTY OR NOT
    // cout<<endl;
    // cout<<st.empty();

    // cout<<endl;

    // if(st.empty()){
    //     cout<<"Stack is empty.";

    // }
    // else{
    //     cout<<"Stack is not empty.";
    // }

    // cout<<endl;

    // cout<<"The size of Stack is: "<<st.size();





    //CREATION OF STACK USING AN ARRAY
    Stack st(5);
    st.push(10);
    st.push(20);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek();
    cout<<endl;
    st.pop();
    cout<<endl;
    cout<<st.isEmpty();

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<endl;
    st.push(60);
    cout<<endl;
    st.push(70);
    
}