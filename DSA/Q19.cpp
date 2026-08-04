//ARRAY IN STL
// #include <iostream>
// #include <array>
// using namespace std;
// int main(){
//     int basic[3]={1,2,3};  //NORMAL array
//     array<int,4> a={1,2,3,4};  //array created stl
//     int size =a.size();
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"Element at 2nd Index: "<<a.at(2)<<endl;
//     cout<<"Element at 3rd Index: "<<a.at(3)<<endl;
//     cout<<"First Element: "<<a.front()<<endl;
//     cout<<"Last Element: "<<a.back()<<endl;
// }




//VECTOR
//VECTOR IS AN DYNAMIC ARRAY. SUPPOSE IF SIZE OF THE VECTOR IS 5 AND WE ARE 
//ARE TRYING TO STORE MORE THAN 5 ELEMENTS THEN IN THAT CASE THE VECTOR WILL DOUBLE ITS SIZE.ACTUALLY WHAT HAPPENS IS THE OLD VECTOR WILL CREATE A NEW VECTOR OF THE SIZE DOUBLE OF ITSELF.IT WILL COPY ALL THE ELEMENTS WHICH WAS PRESENT IN ITSELF TO THE NEW VECTOR AND AFTER THAT IT WILL DUMP ITSELF.


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     cout<<"Size "<<v.capacity()<<endl;  //INITIALLY IT HAS ZERO ELEMENT
//     v.push_back(1);
//     cout<<"Size "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"Sie "<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"Size "<<v.capacity()<<endl;
//     v.push_back(4);
//     cout<<"Size "<<v.capacity()<<endl;
//     v.push_back(5);
//     cout<<"Size "<<v.capacity()<<endl;
//     v.push_back(6);
//     cout<<"Size "<<v.capacity()<<endl;
//     v.push_back(7);
//     cout<<"Size "<<v.capacity()<<endl;
//     v.push_back(8);
//     cout<<"Size "<<v.capacity()<<endl;
//     v.push_back(9);
//     cout<<"Size "<<v.capacity()<<endl; //SIZE BATATA HAI KITNE ELEMENT PADHE HAI AUR CAPACITY BATATA HAI KI KITNE ELEMENT K LIYE SIZE BANA HUA HAI
//     vector <int> a(5,1); //VECTOR IS CREATED OF CAPACITY 5 WITH ALL ELEMENTS AS 1
//     vector <int> last(a);  //A LAST NAMED VECTOR IS CREATED WITH ELEMENT OF a vector
    
    
// }

//DOUBLY ENDED QUEUE
// #include <iostream>
// #include <deque>
// using namespace std;
// int main(){
//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);
//     for(int i:d){
//         cout<<i<<" "; 
//     }
//     cout<<endl;

//     //d.pop_back();
//     cout<<"Print First Index Element "<<d.at(1)<<endl;
//     cout<<"front "<<d.front()<<endl;
//     cout<<"back "<<d.back()<<endl;
//     cout<<"before erase"<<d.size()<<endl;
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"after erase"<<d.size()<<endl;
// }