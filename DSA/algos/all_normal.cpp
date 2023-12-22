#include<iostream>
using namespace std;

void bubble_sort(int*arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void insertion_sort(int*arr, int size){
    for(int i=0; i<size; i++){
    int temp =arr[i];
    int j=i-1;
        for(; j>=0; j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
   
            }else{break;}
        }
        arr[j + 1] = temp;
    }
}

void selection_sort(int *arr, int size){
    for(int i=0; i<size-1;i++){
        int min=i;
        for(int j=i+1; j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
         swap(arr[min], arr[i]);
    }
}

void print(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[10]={9,7,5,11,12,2,14,3,10,6};
    print(A, 10);
    // bubble_sort(A, 10);
    // insertion_sort(A,10);
    // selection_sort(A,10);

    print(A, 10);
    
    return 0;
}
