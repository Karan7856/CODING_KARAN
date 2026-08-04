//REVERSAL OF A QUEUE
//HINT TAKE A QUEUE AND A STACK TRANSFER ELEMENTS FROM QUEUE TO STACK AND AGAIN FROM STACK TO QUEUE
#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> qu;
    stack<int> st;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int no;
        cin>>no;
        qu.push(no);
    }
    while(not qu.empty()){
        int temp=qu.front();
        st.push(temp);
        qu.pop();
    }
    while(not st.empty()){
        int temp2=st.top();
        qu.push(temp2);
        st.pop();
        
    }
    while(not qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop();
    }
}