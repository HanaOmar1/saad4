#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Call the sum function and display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl;

    return 0;
}
