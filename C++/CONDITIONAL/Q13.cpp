//IF AGES OF RAM,SHYAM,AJAY ARE INPUT THROUGH THE KEYBOARD,WRITE A PROGRAM TO DETERMINE THE YOUNGEST OF THE THREE
#include <iostream>
using namespace std;
int main(){
    int age1;
    cout<<"Enter the age of Ram:";
    cin>>age1;
    int age2;
    cout<<"Enter the age of Shyam:";
    cin>>age2;
    int age3;
    cout<<"Enter theh age of Ajay:";
    cin>>age3;
    if(age1<age2){
        if(age1<age3){
            cout<<"Ram is the Yougest";
        }
        else{
            cout<<"Ajay is the youngest";
        }
    }
    else{
        if(age2<age3){
            cout<<"Shyam is the youngest";
        }
        else{
            cout<<"Ajay is the youngest";
        }
    }
}