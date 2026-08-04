//VECTORS IN CPP
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    //DECLARE A VECTOR
    // vector<int> v;
    // vector<int> v1(5,1);//vector of size 5 and with 1 filled at every index
    // cout<<"Initial size of v: "<<v.size();  //size of vector
    // cout<<endl;
    // cout<<"Initial capacity of v: "<<v.capacity(); //size of vector
    // cout<<endl;
    // //inserting element
    // v.push_back(1);
    // cout<<"Size of vector after inserting 1 element: "<<v.size();
    // cout<<endl;
    // cout<<"Capacity of vector after inserting 1 element: "<<v.capacity();
    // cout<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // cout<<"Size of the vector when 3 elements are present: "<<v.size();
    // cout<<endl;
    // cout<<"Capacity of the vector when 3 elements are present: "<<v.capacity(); //VECTOR DOUBLES IT SIZE WHEN THERE IS NO SPACE TO ADD NEW ELEMENT

    // cout<<"Iniitial size of vector v1: "<<v1.size();
    // cout<<endl;
    // cout<<"Initital capacity of vector v1: "<<v1.capacity();  //WHEN WE DECLARE AND VECTOR WITH ITS SIZE INITIALIZED THE SIZE OF THE VECOTR AND CAPACITY IS SAME
    // cout<<endl;

    // v1.push_back(6); //now if we try to push anthor element in v1 it will doubles its size as there is no space to add new element
    // cout<<"size of vector v1: "<<v1.size();
    // cout<<endl;
    // cout<<"capacity of vector v1: "<<v1.capacity(); 
    // cout<<endl;

    // //DELETE VALUE FROM VECTOR
    // vector<int> v3;
    // v3.push_back(4);
    // v3.push_back(5);
    // v3.push_back(10);
    // v3.push_back(15);
    // v3.push_back(90);
    // cout<<"Initial size before pop: "<<v3.size();
    // cout<<endl;
    // v3.pop_back();
    // cout<<"After pop operation: "<<v3.size();
    // cout<<endl;

    // //REMOVING ANY ELEMENT FROM VECTOR
    // v3.erase(v3.begin()+3); //removing 15 
    // cout<<"Size After removing the element at index 3: "<<v3.size();
    // cout<<endl;
    // //PRINTING VECTOR3
    // for(int i=0;i<v3.size();i++){
    //     cout<<v3[i]<<" ";
    // }
    // cout<<endl;
    // //INSERTING ELEMENT AT A PARTICULAR INDEX
    // v3.insert(v3.begin()+1,600); //insert 600 at index 1
    // for(int i=0;i<v3.size();i++){
    //     cout<<v3[i]<<" ";
    // }
    // cout<<endl;

    // //REMOVING ALL ELEMENT AT ONE -GO IN VECOTOR
    // //v3.clear();   //capacity will remain same only size will become 0

    // //PRINTING FIRST ELEMENT OF THE VECOTR
    // vector<int> v4;
    // v4.push_back(10);
    // v4.push_back(20);
    // v4.push_back(30);
    // v4.push_back(40);
    // cout<<v4.front();
    // cout<<endl;
    // cout<<v4.back();
    // cout<<endl;
    // //COPY VALUE OF 1 VECTOR TO ANOTHER
    // vector<int> v5;
    // v5=v4;
    // for(int i=0;i<v5.size();i++){
    //     cout<<v5[i]<<" ";
    // }
    // cout<<endl;

    // for(auto i:v5){
    //     cout<<i<<" ";
    // }

    //cout<<endl;
    //SORTING THR VECTOR
    //INCREASING ORDER
    vector<int> ans;
    ans.push_back(43);
    ans.push_back(3);
    ans.push_back(90);
    ans.push_back(33);
    sort(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    //DECREASING ORDER
    sort(ans.begin(),ans.end(),greater<int>());
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    //SEARCHNIG IN VECTOR IN O(LOGN)
    cout<<binary_search(ans.begin(),ans.end(),8);
    cout<<endl;

    //FINDING INDEX OF ANY ELEMENT
    find(ans.begin(),ans.end(),90)-ans.begin();

}