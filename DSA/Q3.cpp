//LINEAR SEARCH
#include <iostream>
using namespace std;
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    int count=0;
    //TELL WHEATHER 1 IS PRESENT IN THE ARRAY OR NOT
    for(int i=0;i<10;i++){
        if(arr[i]==1){
            count=1;
        }
        else{
            count=2;
        }
    }
    if(count==1){
        cout<<"One is  present in the array";
    }
    else{
        cout<<"One is not present in the array";
    }
}