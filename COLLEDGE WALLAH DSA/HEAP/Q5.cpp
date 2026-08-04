//PRIORITY QUEUE
//MAX HEAP WALI PRIORITY QUEUE
#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>p;
    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);
    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;
    cout<<p.size()<<endl;
    while(not p.empty()){
        int temp=p.top();
        cout<<temp<<endl;
        p.pop();
    }
}