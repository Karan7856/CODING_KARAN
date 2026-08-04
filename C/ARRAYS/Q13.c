//PASSING ARRAY TO THE FUNCTIONS
// #include <stdio.h>
// void fun(int arr[]){
//     arr[0]=10;//THIS UPDATES THE VALUE OF ARRAY AT INDEX 1
//     return;


// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     fun(arr);
//     printf("%d\n",arr[0]);
//     return 0;
// }
//SWAPPING THE VALUE OF ELMENTS IN ARRAY
#include <stdio.h>
void fun(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}
int main(){
    int arr[2]={1,2};
    printf("Elements of array before swapping:%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("The value of array after swapping:%d %d",arr[0],arr[1]);
    return 0;

}
