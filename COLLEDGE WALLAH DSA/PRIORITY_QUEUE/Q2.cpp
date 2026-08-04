//MAX PRIORITY QUEUE
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n;
    cin>>n;
    priority_queue<pair<int,string>>pq;
    while(n--)
    {   string m;
        int k;
        cin>>m>>k;
        pq.push({k,m});
    }
    while(!pq.empty())
    {
        cout<<"Treating patient: "<<pq.top().second<<" (Severity: "<<pq.top().first<<")"<<endl;
        pq.pop();
    }
    
}