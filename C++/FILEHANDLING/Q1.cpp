//FILE CREATION
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     ofstream onFile; //creating file with the help of object
//     onFile.open("C:\\Users\\kr893\\Desktop\\file.txt");
//     onFile.close();
// }

//data change in file
#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream onFile; //creating file with the help of object
    onFile.open("C:\\Users\\kr893\\Desktop\\file.txt");
    onFile<<"Thankyou so much";
    onFile.close();
}

//printing the value stored in the file
#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream inFile; //creating file with the help of object
    string str;
    inFile.open("C:\\Users\\kr893\\Desktop\\file.txt");
    //inFile>>str;
    while(getline(inFile,str)){
        cout<<str;
    }
    inFile.close();
}

//DELETION OF A FILE

#include <bits/stdc++.h>
using namespace std;
int main(){

    int val=remove("C:\\Users\\kr893\\Desktop\\file.txt");
    if(val==0){
        cout<<"File Deleted";
    }
    else{
        cout<<"File is not Deleted";
    }
}