//2-D ARRAY
#include <iostream>
using namespace std;
// int main(){
//     int row;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     int col;
//     cout<<"Enter the number of columns: ";
//     cin>>col;
//     int arr[row][col]; //declaring an 2-d array
//     //initializing a 2-d array by taking user input
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int target;
//     cout<<"Enter the target elememnt to find in the array: ";
//     cin>>target;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==target){
//                 cout<<"Element found in the array";
//                 break;
//             }
//         }
//     }
// }



//PASSING ARRAY TO A FUNCTION
// void print(int arr[][2],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }
// int main(){
//     int arr[2][2]; //declaring an 2-d array
//     //initializing a 2-d array by taking user input
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cin>>arr[i][j];
//         }
//     }
//     print(arr,2,2);

// }

//ADDING TWO MATRIX
// void add(int mat1[][2],int mat2[][2],int mat3[][2],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             mat3[i][j]=mat1[i][j]+mat2[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//          for(int j=0;j<2;j++){
//             cout<<mat3[i][j]<<" ";
//         }
//     }
// }
// int main(){
//     int mat1[2][2]={10,20,30,40};
//     int mat2[2][2]={10,20,30,40};
//     int mat3[2][2];
//     add(mat1,mat2,mat3,2,2);

// }


//RETURN THE INDEX OF THE ROW WITH THE LARGEST SUM OF ELEMENTS
// int main(){
//     int arr1[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int sum2=0;
//     int index=-1;
//     for(int i=0;i<4;i++){
//         int sum1=0;
//         for(int j=0;j<4;j++){
//             sum1=sum1+arr1[i][j];


//         }
//         if(sum1>sum2){
//             sum2=sum1;
//             index=i;
//         }
//     }

//     cout<<"The index with the max row sum is: "<<index;
    
// }


//SUM OF DIAGONAL ELEMENTS

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int first_diagonal=0;
    int second_diagonal=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                first_diagonal=first_diagonal+arr[i][j];
            }
        }
    }
    int i=0;
    int j=2;
    while(j>=0){
        second_diagonal+=arr[i][j];
        i++;
        j--;
    }
    cout<<"Sum of first Diagonal: "<<first_diagonal;
    cout<<endl;
    cout<<"Sum of second diagonal: "<<second_diagonal;
}