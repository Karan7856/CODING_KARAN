//HOW CAN WE REVERSE A Stack

//APPROACH: STEP1 EK STACK SE KISI DUSRE STACK ME ELEMENT DALO JAB TUM EK STACK SE KISI DUSRE
//STACK ME ELEMENT DALOGE TAB STACK WILL GET REVERSED FIR KYA KARO FIR EK AUR NAYA STACK BANAO
//USS NAYE STACK ME FIR ELEMENTS KO DALO JAK ELEMENTS KO DALOGE TAK ELEMENTS APNE ORIGINAL FORM
//ME AA JAYENGE USSKE BAAD USS STACK SE SABSE PHELE WALE STACK ME ELEMENTS DALO USSE ELEMENTS 
//REVERSE HOO JAYENGE




#include <iostream>
#include <stack>
using namespace std;
void InsertAt(stack<int> &st1){
    stack<int>temp1;
    stack<int>temp2;
    //int count=0;
    int n=st1.size();// stack ka size
    while(not st1.empty()){
        //count++;
        int curr=st1.top();
        st1.pop();
        temp1.push(curr);
    }
    while(not temp1.empty()){
        int curr2=temp1.top();
        temp1.pop();
        temp2.push(curr2);
    }
    while(not temp2.empty()){
        int curr3=temp2.top();
        temp2.pop();
        st1.push(curr3);
    }

}
int main(){
    stack<int>st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    InsertAt(st1);
    while(not st1.empty()){
        int curr=st1.top();
        st1.pop();
        cout<<curr<<endl;
        
    }

    
}