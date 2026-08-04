//POINTERS IN CHAR ARRAY
// #include <iostream>
// using namespace std;
// int main(){

//     //THIS WILL PRINT THE VALUE OF THE CHAR ARRAY NOT THE ADDRESS OF THE ELEMENT
//     char arr[5]={'1','2','3','4'};
//     char *ptr=arr;
//     cout<<ptr;
//     cout<<endl;
//     cout<<arr;
//     cout<<endl;
//     //TO PRINT THE ADDRESS OF THE ARRAY we use typecasting

//     for(int i=0;i<5;i++){
//         cout<<(void*)ptr+i<<" ";
//     }


    


// }


// #include <iostream>
// using namespace std;

// void inc(int *ptr){
//     *ptr=*ptr+1;
// }
// int main(){
//     int num=10;
//     int temp=num;
//     cout<<"Initial value of num: "<<num<<endl;
//     inc(&num);
//     cout<<"After increment value of num: "<<num<<endl;
// }


// #include <iostream>
// using namespace std;
// void dou(int ptr[]){
//     for(int i=0;i<5;i++){
//         ptr[i]=ptr[i]*2;   //*(ptr+i) = ptr[i]
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     dou(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


//SWAPPING TWO NUMBERS

// #include <iostream>
// using namespace std;
// void swap(int *ptr1,int *ptr2){
//     int temp=*ptr1;
//     *ptr1=*ptr2;
//     *ptr2=temp;
// }
// int main(){
//     int a=10;
//     int b=20;
//     swap(&a,&b);
//     cout<<"After Swap: "<<a<<" "<<b<<endl;
// }


//REFERENCE variable

// #include <iostream>
// using namespace std;
// int main(){
//     int n=10; //suppose its address is 100
//     int &temp=n; //n address is  100 but it has now also been given address temp both 100 and tempp are same
//     temp++;
//     cout<<n;
// }


//PASS BY REFERENCE

// #include <iostream>
// using namespace std;
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a=10;
//     int b=20;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }



