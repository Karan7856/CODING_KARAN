// Is Unique
// Implement an algorithm to determine if a string has all unique characters.
// Input:"abcdefg"→Output:true
// Input:"hello"→Output:false

#include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="hello";
//     unordered_map<char,int> m;
//     for(int i=0;i<s.length();i++){ 
//         m[s[i]]++;
//     }
//     for(auto i:m){
//         if(i.second>1){
//             cout<<"false";
//             return 0;
//         }
//     }
//     cout<<"true";
// }



// URLify
// Replace all spaces in a string with "%20". The string has sufficient trailing space to hold the extra characters, and the true length of the string is given.
// Input:"Mr John Smith ", true length = 13→Output:"Mr%20John%20Smith"


#include <bits/stdc++.h>
using namespace std;
void solution(string s,int length){
    string ans="";
    for(int i=0;i<length;i++){
        if(s[i]==' '){
            ans+="%20";

        }
        else{
            ans+=s[i];
        }


    }
    cout<<ans;

}
int main(){
    string s="Mr John Smith    ";
    int length=13;
    solution(s,length);
}