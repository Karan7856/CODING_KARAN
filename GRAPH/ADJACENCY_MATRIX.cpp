#include <bits/stdc++.h>
using namespace std;
void addedge(vector<vector<int>>&mat,int i,int j){
    mat[i][j]=1;
    mat[j][i]=1;
}
int main(){
    vector<vector<int>>mat(4,vector<int>(4,0));
    addedge(mat,0,1);
    addedge(mat,0,2);
    addedge(mat,1,2);
    addedge(mat,2,3);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

}