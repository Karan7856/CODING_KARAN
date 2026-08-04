//HOW CAN WE ADD AN ELEMENT AT THE BOTTOM OF THE STACK
#include <iostream>
#include <stack>
using namespace std;
void InsertAtBottom(stack<int> &st1,int x){
    stack<int>temp;
    while(not st1.empty()){
        int curr=st1.top();
        st1.pop();
        temp.push(curr);
    }
    st1.push(x);
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st1.push(curr);
    }

}
int main(){
    stack<int>st1;
    stack<int>st2;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);
    InsertAtBottom(st1,10);
    while(not st1.empty()){
        int curr=st1.top();
        st1.pop();
        cout<<curr<<endl;
        
    }
}