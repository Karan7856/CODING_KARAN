//Q1 LINEAR SEARCH

// https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


//Q2 REVERSE AN ARRAY

//https://www.geeksforgeeks.org/problems/reverse-an-array/1


//REFER TO THE EXCEL SHEETS



//HOW TO PASS ARRAY TO A FUNCTION 


#include <iostream>
using namespace std;
void fun(int a[],int n){
    cout<<sizeof(a)<<endl;
    for(int i=0;i<5;i++){
        a[0]=777;
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<" ";
    cout<<endl;
    fun(arr,5);
}