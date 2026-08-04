// //INSERTION SORT
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<n;i++){
//         int temp=arr[i];
//         int j=i-1;
//         for(;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             else{
//             break;
//         }
            
//         }

//         arr[j+1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];  // Variable-length array (VLA)

    // Reading array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than temp, to one position ahead of their current position
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;  // Insert the current element in its correct position
    }

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
