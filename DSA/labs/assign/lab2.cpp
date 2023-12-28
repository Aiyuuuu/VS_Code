#include <iostream>
using namespace std;
void deleteElement(int arr[], int& size, int index) {
if (index < 0 || index >= size) {
cout << "Invalid index. Element removal failed." << endl;
return;
}
for (int i = index; i < size - 1; i++) {
arr[i] = arr[i + 1];
}
size--;
for (int i = size; i < 7; i++) {
arr[i] = 0;
}
}


void print(int arr[], int size){
for (int i = 0; i < size; i++)
cout << arr[i] << " ";
cout << endl;
}
int main(){
int LA[7] = {1, 2, 5, 4, 3, 6, 8};
int size=7;
print(LA, 7);
cout<<"deleting element at index 0"<<endl;
deleteElement(LA, size, 0);
print(LA, 7);
cout<<"deleting element at index 2"<<endl;
deleteElement(LA, size, 2);
print(LA, 7);
cout<<"deleting element at index 4"<<endl;
deleteElement(LA, size, 4);
print(LA, 7);
return 0;
}