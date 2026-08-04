// 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    switch(n){
        case 1:
        cout<<"JAN";
        break;
        case2:
        cout<<"FEB";
        break;
        case 3:
        cout<<"MAR";
        break;
        case 4:
        cout<<"APR";
        break;
        case 5:
        cout<<"MAY";
        break;
        case 6:
        cout<<"JUN";
        break;
        case 7:
        cout<<"JULY";
        break;
        case 8:
        cout<<"AUG";
        break;
        
        case 9:
        cout<<"SEP";
        break;
        case 10:
        cout<<"OCT";
        break;
        case 11:
        cout<<"NOV";
        case 12:
        cout<<"DEC";
        break;
        default:
        cout<<"Invalid number";

    }
}