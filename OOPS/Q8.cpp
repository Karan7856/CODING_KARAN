USER DEFINED DATA STRUCTURE
#include <iostream>
using namespace std;
vector <int> v;
v.push_back(10);   //size=1 capacity=0
v.push_back(4);    //size=2 capacity=1
v.push_back(21);   //size=3 capacity=2
v.push_back(2);    //size=4 capacity=4
v.push_back(5);    //size=5 capacity=8
v.push_back(90);    //size=6 capacity=8

//v.pop_back();      //removes the last element of the array


//DYNAMIC ARRAY
int* arr=new int[5];
arr[0]=5;
arr[3]=4;

//MY VECTOR
int main(){
    
}

//ENTERING VALUES TO A VECTOR AND THEN PRINTING THE VECTOR

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}