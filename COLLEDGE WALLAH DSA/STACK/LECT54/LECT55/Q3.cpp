//NEXT SMALLER ELEMENT
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> nge(vector<int> &arr){
    int n=arr.size();
    vector<int> output(n,-1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() and arr[i]<arr[st.top()]){
            output[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(not st.empty()){
        output[st.top()]=-1;
        st.pop();
    }
    return output;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> res=nge(v);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}

//TO FIND THE PREVOUS GREATER OR PREVOIUS SMALLER JUST REVERSE THE ORIGINAL ARRAY AND THEN FIND THE NEXT GREATER OR SMALLER AND THEN THE OUPUT ARRAY KO BHI REVERSE KAR DO
//PREVIOUS GREATER
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr1[start],arr1[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr1[j]>arr1[i]){
                arr2[i]=arr1[j];
                break;
            }
        }
    }
    while(start<end){
        swap(arr2[start],arr2[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}