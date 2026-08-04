//LAST STONE WEIGHT
//https://leetcode.com/problems/last-stone-weight/description/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    priority_queue<int>p;
    for(int i=0;i<n;i++){
        p.push(arr[i]);
    }
    int weight=0;
    while(p.size()>1){
        weight=p.top();
        p.pop();
        weight-=p.top();
        p.pop();
        if(weight){    //agr weight exist karta hai toh means that if weight is not zero tab queue me insert karo warna nhi karo
            p.push(weight);
        }
    }
    if(p.empty()){
        cout<<0;
    }
    else{
        cout<<p.top();
    }
}