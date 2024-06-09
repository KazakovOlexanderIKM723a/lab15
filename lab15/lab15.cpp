#include <iostream>
#include <cstdlib> 

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int SIZE = 20;
    int a[SIZE];
    int b[SIZE];

    cout << "Array a: ";
    for (int i = 0; i < SIZE; ++i) {
        a[i] = rand() % 100; 
        std::cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; ++i) {
        b[i] = a[SIZE - 1 - i];
    }

    cout << "Reverse array b: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    selectionSort(b, SIZE);

    cout << "Sorted array b (choice): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; ++i) {
        b[i] = a[SIZE - 1 - i];
    }

    bubbleSort(b, SIZE);

    cout << "Sorted array b (bubble): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
