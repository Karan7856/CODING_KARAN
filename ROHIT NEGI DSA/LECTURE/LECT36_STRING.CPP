//STRING 
//CHARACTER ARRAY

#include <iostream>
#include <string>
using namespace std;
int main(){
    // char arr[10]={'K','A','R','A','N'};
    // cout<<arr;

    // char arr[10];
    // cin>>arr;
    // cout<<arr;


    // char arr[10];
    // cin>>arr;
    // arr[2]='\0'; //assigning null character to index 0
    // cout<<arr; //only characters at index 0 and 1 will be printed as on index 2 there is null characters so the computer will terminate the program when it will detect nul character


    // string st="Karan";
    // cout<<st;

    // string st;
    // cin>>st;
    // cout<<st;

    // string st;
    // cin>>st;   //Karan Raj
    // cout<<st;  //Karan


    // string st;
    // getline(cin,st);  //Karan Raj
    // cout<<st;         //Karan Raj


    //GETTTING SIZE
    // string str="Karan is a smart boy";
    // cout<<str.size();

    //merging two strings
    // string s1;
    // cin>>s1;
    // string s2;
    // cin>>s2;
    // string s3=s1+s2;
    // cout<<s3;


    //USE OF ESCAPE CHARACTER
    // string s="Karan is a \"good\" boy";
    // cout<<s;

    // string s;
    // getline(cin,s);
    // cout<<s;

    // string s="\0";
    // cout<<s;

    // string s="\\0";
    // cout<<s;



    //QUESTION-1 
    //REVERSAL OF A STRING
    string s;
    cin>>s;
    int size=s.size();
    int start=0;
    int end=size-1;
    while(start<end){
        char temp=s[start];
        s[start]=s[end];
        s[end]=s[start];
        start++;
        end--;
    }
    cout<<s;
    


}