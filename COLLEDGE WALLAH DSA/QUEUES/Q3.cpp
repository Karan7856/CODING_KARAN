//STL IMPLEMENTATION OF STACK
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.push(60);
    qu.push(70);
    qu.push(80);
    qu.push(90);
    qu.push(100);
    while(not qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop();
    }
}