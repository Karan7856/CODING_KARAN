
#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
    int* arr;
    int size;       // current number of elements in heap
    int total_size; // maximum capacity of the heap

public:
    MaxHeap(int n) {
        arr = new int[n]; //allocated dynamically allocated memory to an array the arr points the array
        size = 0;
        total_size = n;
    }

    // Insert into the heap
    void insert(int value) {
        // Check if space is available in the heap
        if (size == total_size) {
            cout << "Heap Overflow" << endl;
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        // Bubble up the element to maintain max heap property
        cout << value << " is inserted in the heap" << endl;
        while (index > 0 && arr[(index - 1) / 2] < arr[index]) {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void Heapify(int index) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        // largest will store the index of the element which is greater between parent, left child, and right child
        if (left < size && arr[left] > arr[largest]) {
            largest = left;
        }
        if (right < size && arr[right] > arr[largest]) {
            largest = right;
        }
        if (largest != index) {
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }
    }

    void deleteRoot() {
        if (size == 0) {
            cout << "Heap Underflow" << endl;
            return;
        }
        cout << arr[0] << " deleted from the heap" << endl;
        arr[0] = arr[size - 1];
        size--;

        // If size is zero after deletion, no need to heapify
        if (size > 0) {
            Heapify(0);
        }
    }
};

int main() {
    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(20);
    H1.insert(100);
    // H1.deleteRoot();
    H1.insert(80);
    H1.print();

    return 0;
}
