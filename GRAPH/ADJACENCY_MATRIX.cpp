//ADJACENCY MATRIX REPRESENTARTION OF UNIDIRECTED AND UNWEIGHTED(GRAPH WOITH ALL EDGES WEIGHT 1) GRAPH
// #include <bits/stdc++.h>
// using namespace std;
// void addedge(vector<vector<int>>&mat,int i,int j){
//     mat[i][j]=1;
//     mat[j][i]=1;
// }
// int main(){
//     vector<vector<int>>mat(4,vector<int>(4,0));
//     addedge(mat,0,1);
//     addedge(mat,0,2);
//     addedge(mat,1,2);
//     addedge(mat,2,3);
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<"\n";
//     }

// }

//ADJACENCY LIST ->> ARRAY OF LUNKED LUST
#include <bits/stdc++.h>
using namespace std;
class Graph{
    public:
    map<int,list<int>>adj_list;

    void add_edge(int u,int v){
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    void print(){
        for(auto i:adj_list){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        
    }
};
int main(){
    Graph g;
    g.add_edge(1,2);
    g.add_edge(1,4);
    g.add_edge(2,4);
    g.add_edge(2,3);
    g.add_edge(3,5);
    g.add_edge(3,4);
    g.add_edge(4,5);
    g.print();
    return 0;
}
