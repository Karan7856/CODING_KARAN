// Input 1 :
// 5
// 101 3
// 102 5
// 103 4
// 104 2
// 105 1
// Output 1 :
// Priority Queue: 105 104 101 103 102 
// Input 2 :
// 3
// 201 8
// 202 9
// 203 7
// Output 2 :
// Priority Queue: 203 201 202 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    cin>>n;
    while(n--){
        int unique_id;
        int k;
        cin>>unique_id>>k;
        pq.push({k,unique_id});
    }
    cout<<"Priority Queue: ";
    while(not pq.empty()){
        cout<<pq.top().second<<" ";
        pq.pop();
    }

    return 0;
}
