#include<iostream>
using namespace std;

int partition(int*arr,int start,int end){
    int pivot=arr[end];
    int i=start-1;

    for(int j=start; j<end; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);

        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}

void quick_sort(int *arr, int start, int end){
    if(start<end){  
        
           int pivot=partition(arr, start, end);

           quick_sort(arr, start, pivot-1);
           quick_sort(arr, pivot+1, end);

}}

void print(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int A[10]={9,7,5,11,12,2,14,4,3,10};
    print(A, 10);
    quick_sort(A, 0, 9);
    print(A, 10);

    return 0;
}