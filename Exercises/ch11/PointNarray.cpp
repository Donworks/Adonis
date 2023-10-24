#include <iostream>
using namespace std;

int main() {
    const int ArraySize = 5;  // Size of the array
    int numbers[ArraySize] = {12, 22, 5, 0, 5};  // Initialize an array of integers

    int sum = 0;  // Initialize a variable to store the sum

    // Use a pointer to iterate through the array and calculate the sum
    int* ptr = numbers;  // Initialize a pointer to the beginning of the array

    for (int i = 0; i < ArraySize; i++) {
        sum += *ptr;  // Add the value pointed to by ptr to the sum
        ptr++;  // Move the pointer to the next element in the array
    }

    // Print the sum
    cout << "Sum of the elements: " << sum << endl;

    return 0;
}
