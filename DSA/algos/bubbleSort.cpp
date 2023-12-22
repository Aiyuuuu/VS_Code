#include<iostream>
using namespace std;

void bubble_sort(int *arr, int size){
    for(int i = 0; i < size - 1; i++){

        for(int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);}
        }
    }
}

void print(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int A[6]={6,5,4,3,2,1};
    print(A, 6);
    bubble_sort(A, 6);
    print(A, 6);

    return 0;
}
