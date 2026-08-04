//MIN HEAP PRIORITY QUEUE
#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);
    while(not p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }
}