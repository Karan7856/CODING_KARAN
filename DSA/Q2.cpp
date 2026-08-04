// ////SCOPE IN ARRAY
// #include <iostream>
// using namespace std;
// void update(int arr[],int n){
//     cout<<"Inside the function"<<endl;
//     arr[]
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     cout<<"Going back to function"<<endl;

// }
// int main(){
//     int arr[3]={1,2,3};
//     update(arr,3);
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;


//     return 0;
// }


//CREATE AN ARRAY. PRINT THE SUM OF ALL ELEMENT IN AN ARRAY

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"The sum of all the elements of the array is:"<<" "<<sum;
}