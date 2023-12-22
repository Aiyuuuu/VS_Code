#include<iostream>
using namespace std;

void bubble_sort(int *arr, int size) {
    if (size == 1) {
        return;
    }

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubble_sort(arr, size - 1);
}

void print(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[6] = {6,5,4,3,2,1};
    int size = 6;

    cout << "Original array: ";
    print(A, size);

    bubble_sort(A, size);

    cout << "Sorted array: ";
    print(A, size);

    return 0;
}
