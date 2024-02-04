// #include <iostream>

// int fibonacci(int n) {
//     if (n <= 1)
//         return n;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n = 10; // Change this value as needed
//     std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;
//     return 0;
// }

// #include <iostream>

// int factorial(int n) {
//     if (n <= 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main() {
//     int n = 5; // Change this value as needed
//     std::cout << "Factorial(" << n << ") = " << factorial(n) << std::endl;
//     return 0;
// }

// #include <iostream>

// void towerOfHanoi(int n, char source, char auxiliary, char destination)
// {
//     if (n == 1)
//     {
//         std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
//         return;
//     }

//     towerOfHanoi(n - 1, source, destination, auxiliary);
//     std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
//     towerOfHanoi(n - 1, auxiliary, source, destination);
// }

// int main()
// {
//     int n = 3; // Change this value as needed
//     towerOfHanoi(n, 'A', 'B', 'C');
//     return 0;
// }


