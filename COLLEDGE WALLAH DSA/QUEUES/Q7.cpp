//WE ARE GIVEN A STACK DATA STRUCTURE WITH PUSH AND POP OPERATIONS THE TASK IS TO IMPLEMENT A QUEUE USING INSTANCES OF STACK DATA STRUCTURE AND OPERATIONS ON THEM
//THERE ARE TWO METHOD
//1. PUSH EFFICIENT - THE ENQUEUE SHOULD HAVE T.C O(1) 
//2. POP EFFICIENT - THE DEQUEUE SHOULD HAVE T.C O(1)
//THIS CODE IS PUSH EFFICIENT
#include <bits/stdc++.h>
using namespace std;
class Queue{
    stack<int> st;
    public:
    Queue(){

    }
    void push(int x){
        this->st.push(x);
    }
    void pop(){
        if(this->st.empty()){
            return;
        }
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(this->st.top());
            this->st.pop();
        }
        //now stack size is 1 ,and we are at the bottom element
        this->st.pop();
        while(not temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }
    bool is_empty(){
        return this->st.empty();
    }
    int front(){
        if(this->st.empty()){
            return INT_MIN;
        }
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        //now stack size is 1 ,and we are at the bottom element
        int result=this->st.top();
        while(not temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
        return result;
    }

};
int main(){
    Queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    while(not qu.is_empty()){
        cout<<qu.front()<<endl;
        qu.pop();
    }
    // qu.pop();
    // cout<<qu.front();

}