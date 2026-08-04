//GIVEN THE LENGTH AND BREADTH OF A RECTANGLE. WRITE A PROGRAM TO FIND WHETHER THE AREA OF THE RECTANGLE IS GREATER THAN ITS PERIMETER
#include <iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the length of the rectangle:";
    cin>>l;
    int b;
    cout<<"Enter the breadth of the rectangle:";
    cin>>b;
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"Area is greater than its perimter";
    }
    else{
        cout<<"Area is not greater than its perimter";
    }
}