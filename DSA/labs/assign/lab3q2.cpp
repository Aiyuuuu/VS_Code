#include <iostream>
using namespace std;

int count(int arr[], int n, int x) {
    int startingPosition = -1, endingPosition = -1;

    // Binary search to find the first occurrence of x
    int l = 0, h = n - 1;
    while (l <= h) {
        int mid = l + (h - l) / 2;  // Calculate mid
        if (arr[mid] == x) {
            startingPosition = mid;
            h = mid - 1;
        } else if (arr[mid] > x) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    // Reset l and h for the second binary search
    l = 0, h = n - 1;

    // Binary search to find the last occurrence of x
    while (l <= h) {
        int mid = l + (h - l) / 2;  // Calculate mid
        if (arr[mid] == x) {
            endingPosition = mid;
            l = mid + 1;
        } else if (arr[mid] > x) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    if (startingPosition == -1) {
        return 0;        // Element not found
    }

    return endingPosition - startingPosition + 1;
}

int main() {
    int n = 10;
    int arr[n] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int target;

    cout << "Enter the number to count its occurrences: ";
    cin >> target;

    int counts = count(arr, n, target);

    if (counts == 0) {
        cout <<"Element "<<target<<" is not found in the vector."<<endl;
    } else {
        cout<< "Element "<<target<<" occurs "<<counts<<" times."<<endl;
    }

    return 0;
}
