//TAKE INPUT PERCENTAGE OF A STUDENT AND PRINT THE GRADE ACCORING TO MARKS 1.print very goodi if 81-100 2. print good 61-80 3. print Average if 41-60 4. print <=40 fail
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    if(n>=81 and n<=100){
        cout<<"Very Good";
    }
    else if(n>=61 and n<=80){
        cout<<"Good";
    }
    else if(n>=41 and n<=60){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}