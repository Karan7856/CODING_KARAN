//DOUBLE POINTER
// #include <iostream>
// using namespace std;
// int main(){
//     int i=5;
//     int *ptr=&i;
//     int **ptr2=&ptr;
//     cout<<"Printing the value of i: "<<i<<endl;
//     cout<<"Printing the address of i: "<<&i<<endl;
//     cout<<"Printing value of ptr: "<<ptr<<endl;
//     cout<<"Printing the address of ptr: "<<&ptr<<endl;
//     cout<<"Printing the value of ptr2: "<<ptr2<<endl;
//     cout<<"Printing the address of ptr2: "<<&ptr2<<endl;
//     cout<<"Printing the value of i using ptr2: "<<**ptr2<<endl;
// }




#include <iostream>
using namespace std;
void update(int **ptr2){
    //will this do anychange-->>no as the value of ptr2 is passed by value
    //ptr2=ptr2+1;

    //will this do any change -> yes the value of ptr will change
    //*ptr2=*ptr2+1;

    //will this do any change-> yes the value of i will change 
    **ptr2=**ptr2+1;

}
int main(){
    int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;

    cout<<"Before Update Function call "<<endl;
    cout<<"Value of i: "<<i<<endl;
    cout<<"Value of ptr: "<<ptr<<endl;
    cout<<"value of ptr2: "<<ptr2<<endl;

    update(ptr2);
    cout<<"After Update function call "<<endl;
    cout<<"Value of i: "<<i<<endl;
    cout<<"Value of ptr: "<<ptr<<endl;
    cout<<"value of ptr2: "<<ptr2<<endl;
    
}