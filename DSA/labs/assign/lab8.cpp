// #include<iostream>
// using namespace std;

// long long* Fibonacci(int range) {
//     long long* arr = new long long[range];
//     if(range == 1) {
//         arr[0] = 0;
//         return arr;
//     }

//     if(range == 2) {
//         arr[0] = 0; arr[1] = 1;
//         return arr;
//     }

//     arr[0] = 0; arr[1] = 1;
//     for(int i = 2; i < range; i++) {
//         arr[i] = arr[i-1] + arr[i-2];
//     }
//     return arr;
// }

// void printArr(long long* arr, int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int range;
//     cout << "Enter fibonacci range: ";
//     cin >> range;

//     long long* array = Fibonacci(range);
//     printArr(array, range);

//     delete[] array;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// void printFibonacciSeries(int n) {
//     for (int i = 0; i < n; i++) {
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int range;
//     cout << "Enter the number of Fibonacci numbers to generate: ";
//     cin >> range;

//     cout << "Fibonacci Series:" << endl;
//     printFibonacciSeries(range);

//     return 0;
// }



