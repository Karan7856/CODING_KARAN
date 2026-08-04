//CONTINUE
//PRINT NUMBERS FROM 1 TO 20 EXCEPT 3 AND 8
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        if(i==3||i==8){
            continue;

        }
        cout<<i<<" ";
    }
}