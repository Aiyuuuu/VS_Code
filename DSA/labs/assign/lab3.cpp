#include <iostream>
using namespace std;

void linear_search(int arr[], int key, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == key)
        {
            cout<< "Element " << key << " found at index: "<< i <<endl;
            return;
        }
    }
    cout << "Element " << key << " not found in the array" << endl;
}

int main()
{
    int array[5]={2,4,6,8,10};
    int array_size=5;
    
    linear_search(array, 8, array_size);
    linear_search(array, 3, array_size);

    return 0;
}
