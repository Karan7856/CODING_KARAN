//LECT58
//DEQUE
#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_back(50);
    while(not dq.empty()){
        cout<<dq.front()<<endl;
        dq.pop_front();
    }

}
