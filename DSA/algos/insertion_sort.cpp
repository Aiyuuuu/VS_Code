#include <iostream>
using namespace std;

void insertion_sort(int *arr, int size){

    for (int i = 0; i < size; i++){
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--){
            if (arr[j] > temp){
                arr[j + 1] = arr[j];}
            
            else{
                break;}
        }
        arr[j + 1] = temp;
    }
}

void print(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int A[10]={9,7,5,11,12,2,14,3,10,6};
    print(A, 10);
    insertion_sort(A, 10);
    print(A, 10);

    return 0;
}
