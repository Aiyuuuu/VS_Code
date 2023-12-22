#include <iostream>

using namespace std;

void findThreeLargestElements(int arr[], int size) {
    if (size < 3) {
        cerr << "Array size should be at least 3." << endl;
        return;
    }

    // Bubble sort the array in descending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Print the three largest elements (which are now at the beginning of the sorted array)
    cout << "The three largest elements are: ";
    for (int i = size-1; i >= size-3; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int myArray[] = {10, 5, 8, 15, 7, 3, 20};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    findThreeLargestElements(myArray, arraySize);

    return 0;
}
