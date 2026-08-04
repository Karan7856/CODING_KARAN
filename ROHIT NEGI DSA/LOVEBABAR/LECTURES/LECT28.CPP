//REFERENCE VARIABLE
// #include <iostream>
// using namespace std;
// int main(){
//     int i=5;//original variable
//     int &j=i;
//     i++;
//     j++;
//     cout<<i<<endl;
// }


//WHY WE USE REFERENCE VARIABLE BECAUSE WHEN WE PASS VALUE TO ANY FUNCTION BY MAIN FUCNTION THEN WE PASS IT AS VALUE SO UPDATION IN ORIGINAL VARIABLE IS DONE SO REMOVE THIS LIMITATION WE USE REFERWNCE VARIABLE SO THAT UPDATION IS DONE IN ORIGINAL VARABLE

// #include <iostream>
// using namespace std;

// void update(int &j){
//     j++;
// }
// int main(){
//     int i=5;//original variable
//     cout<<"Before Update function call: "<<i<<endl;
//     update(i);
//     cout<<"After Update fucntion call: "<<i<<endl;
// }



//DYNAMIC MEMORY ALLOCATION
//CREATING AN ARRAY DYNAMICALLY

#include <iostream>
using namespace std;
int sum(int *arr,int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n]; //CREATING DYNAMIC ARRAY
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=sum(arr,n);
    cout<<s;
}