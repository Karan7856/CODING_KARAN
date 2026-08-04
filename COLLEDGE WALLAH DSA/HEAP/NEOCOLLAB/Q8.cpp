// Emily is a mathematics teacher who wants to help her students understand prime and composite numbers better. To achieve this, she decides to collect the numbers her students use for their homework assignments.



// She needs a program that will allow her to input these numbers, classify them as prime or composite, sort both categories and display the results. This will help her illustrate the differences between these types of numbers in class.



// Write a program that takes a list of integers as input, separates them into prime and composite numbers, sorts each category using the heap sort algorithm, and outputs the results.

// Input format :
// The first line contains an integer n, representing the number of integers.

// The second line contains n integers number, representing the integers collected from students.

// Output format :
// The first line displays the sorted prime numbers in ascending order, each separated by a space.

// The second line displays the sorted composite numbers in ascending order, each separated by a space.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// The test cases will fall under the following constraints:

// 2 ≤ n ≤ 10

// 1 ≤ integers ≤ 1000

// Sample test cases :
// Input 1 :
// 5
// 4 3 2 1 6
// Output 1 :
// 2 3 
// 1 4 6 
// Input 2 :
// 10
// 4 5 3 6 7 2 1 8 9 10
// Output 2 :
// 2 3 5 7 
// 1 4 6 8 9 10 


#include <bits/stdc++.h>
using namespace std;

// Function to heapify a subtree rooted at index
void Heapify(int arr[], int n, int index) {
    int largest = index;
    int left = (2 * index) + 1;
    int right = (2 * index) + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != index) {
        swap(arr[largest], arr[index]);
        Heapify(arr, n, largest);
    }
}

// Function to build a max heap
void build_heap(int arr[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        Heapify(arr, n, i);
    }
}

// Function to perform heap sort
void heap_sort(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        Heapify(arr, i, 0);
    }
}

// Function to print the array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

// Function to separate and print primes and composites
void separate_fun(int arr[], int n) {
    cout << "Prime Numbers: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Composite Numbers: ";
    for (int i = 0; i < n; i++) {
        if (!isPrime(arr[i]) && arr[i] >= 1) { // Exclude numbers <= 1
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    build_heap(arr, n);
    heap_sort(arr, n);

    separate_fun(arr, n);

    return 0;
}

