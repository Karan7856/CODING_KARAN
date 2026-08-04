//QUESTION 1 WRIITEN IN NOTEPAD


#include <bits/stdc++.h>
using namespace std;
int main(){
    int value;
    deque<int> dq;
    while(true){
        cin>>value;
        if(value==-1){
            break;
        }
        else{
            dq.push_back(value);
        }
    }
    cout<<"Even elements: ";
    for(int elem:dq){
        if(elem%2==0){
            cout<<elem<<" ";
        }
    }
    cout<<endl;
    cout<<"Odd elem: ";
    for(int elem:dq){
        if(elem%2!=0){
            cout<<elem<<" ";
        }
    }
}