#include<iostream>
using namespace std;

void selection_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArr(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 5, 3, 4};
    int size = 5;

    cout << "Original array: ";
    printArr(arr, size);

    selection_sort(arr, size);

    cout << "Sorted array: ";
    printArr(arr, size);

    return 0;
}
