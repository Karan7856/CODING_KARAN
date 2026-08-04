//COPY CONTENT OF ONE STACK TO ANOTHER STACK IN SAME ORDER
#include <iostream>
#include <stack>
using namespace std;
stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
        //do the process till the time the input stack does not become empty
        int curr=input.top(); //supp input stack is [1,2,3] 3 is at top now curr=3 
        input.pop();//3 will get removed [1,2] 
        temp.push(curr); // temp stack will contain [3] this will continue untill the input stack become empty
    }
    stack<int> result;
    while(not temp.empty()){
        int curr2=temp.top(); //the temp stack will be [3,2,1] now curr2 will be curr2=1
        temp.pop(); //temp stack will be now [3,2]
        result.push(curr2); //result stack will be[1] now loop will continue it will become [1,2] then it will be [1,2,3]
        
        
    }
    return result;
    
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int> res=copyStack(st);
    while(not res.empty()){
        int curr=res.top();
        res.pop();
        cout<<curr<<endl;
    }
    return 0;
}