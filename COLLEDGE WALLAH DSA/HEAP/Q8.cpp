//MINIMUM COST OF ROPES
//https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1?page=1&difficulty
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
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<n;i++){
        p.push(arr[i]);
    }
    int cost=0;
    while(p.size()>1){
        int rope1=p.top();
        p.pop();
        int rope2=p.top();
        p.pop();
        int new_rope=rope1+rope2;
        p.push(new_rope);
        cost+=new_rope;

    }
    cout<<cost;
}