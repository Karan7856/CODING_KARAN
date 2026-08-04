//CHECK WHETHER A GIVEN BRACKET SEQUENCE IS BALANCED OR NOT
#include <iostream>
#include <stack>
using namespace std;
bool isValid(string str){
    stack<char> st;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch=='(' or ch=='{' or ch=='['){
            st.push(ch);
        }
        else{
            if(ch==')' and !st.empty() and st.top()=='('){
                st.pop();
            }
            else if(ch=='}' and !st.empty() and st.top()=='{'){
                st.pop();
            }
            else if(ch==']' and !st.empty() and st.top()=='['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();  //THIS WILL RETURN 1 WHICH MEANS TRUE IF THE STACK WILL BE EMPTY 
}

int main(){
    string str="()()(())";
    cout<<isValid(str)<<endl;
    string str1="()[";
    cout<<isValid(str1)<<endl;
}