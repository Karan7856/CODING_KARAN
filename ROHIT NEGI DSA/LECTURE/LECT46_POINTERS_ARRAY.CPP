// //POINTERS RELATIONSHIP WITH ARRAY
#include <iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};

    //PRINTING ADDRESS OF THE FIRST ELEMENT

    cout<<arr<<"\n";
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    //PRINTING THE ADDRESSS OF THE SECOND ELEMENT

    cout<<arr+1<<"\n";
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    //PRINTING THE ELEMENTS OF THE ARRAY USING POINTERS
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    int *ptr=arr;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    //PRINTING ALL THE ADRESS OF THE ELEMENT OF THE ARRAY

    for(int i=0;i<5;i++){
        cout<<&arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr+i<<" ";
    }
    cout<<endl;

    //APPLYING ARITHEMATIC OPERATION ON POINTER
    int *ptr1=arr;
    for(int i=0;i<5;i++){
        cout<<ptr1<<" ";
        ptr1++;
    }

}




