#include <iostream>
using namespace std;

void heapify(int *arr, int size, int i)
{
    // We consider the index that heapify algorithm accepts is largest
    int largest = i;
    // for left child
    int left = 2 * i;
    // for right child
    int right = 2 * i + 1;
    if (left <= size && arr[largest] < arr[left])
    {
        // Means it found larger element than itself so it updated with left
        largest = left;
    }
    if (right <= size && arr[largest] < arr[right])
    {
        // Means it found larger element than itself so it updated with right
        largest = right;
    }
    if (largest != i)
    { // If largest not equal to i means it found greater elementat left or at right so it changed it's index by it
        swap(arr[largest], arr[i]);
        // call heapify function for other nodes in the heap
        heapify(arr, size, largest);
    }
}
void heapSort(int *arr, int size)
{
    int n = size;
    while (n > 1)
    {
        // swap the first element with last element, we take first element as 1 as wefollow 1 based indexing
        swap(arr[n], arr[1]);
        // reduces the size of last node
        n--;
        // now call heapify algo for 1st element to the transfer first node tocorrect postition
        heapify(arr, n, 1);
    }
}
int main()
{
    // We ignore -1 as we follow 1 based indexing not zero
    int arr[] = {-1, 5, 4, 3, 2, 1};
    int size = 5;
    // build heap
    for (int i = size / 2; i > 0; i--)
    {
        heapify(arr, size, i);
    }
    // After Build Heap now calling HeapSort Function
    heapSort(arr, size);
    // Print Elements of Heap
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}










































