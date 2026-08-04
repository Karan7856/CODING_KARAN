//GIVEN A POITNT X,Y. WRITE A PROGRAM TO FIND OUT IF IT LIES IN THE 1ST QUADRANT , 2ND QUATDRANT , 3RD QUADRANT, 4TH QUADRANT , ON THE X- AXIS , Y-AXIS OR AT THE ORIGIN (0,0)
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x:";
    cin>>x;
    int y;
    cout<<"Enter the value of y:";
    cin>>y;
    if(x>0 and y>0){
    cout<<"The point lies in the first quadrant";
}
else if(x<0 and y>0){
    cout<<"The point lies in the second quadrant";
}
else if(x<0 and y<0){
    cout<<"The point lies in the third quadrant";
}
else{
    cout<<"The point lies in the fourth quadrant";
}

}
