//HOW CAN WE REMOVE AN ELEMENT AT THE BOTTOM OF THE STACK
#include <iostream>
#include <stack>
using namespace std;
void InsertAt(stack<int> &st1,int x,int idx){
    stack<int>temp;
    int count=0;
    int n=st1.size();// stack ka size
    while(count<n-1){
        count++;
        int curr=st1.top();
        st1.pop();
        temp.push(curr);
    }
    st1.pop();
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
    st1.push(200000);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);
    InsertAt(st1,100,0);
    while(not st1.empty()){
        int curr=st1.top();
        st1.pop();
        cout<<curr<<endl;
        
    }
}