#include <iostream>
using namespace std;

int main() {
    int number, totalDigits = 0, evenCount = 0, oddCount = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        number = -number; // Convert negative number to positive
    }
    if (number == 0) {
        totalDigits = 1;
        evenCount = 1; 
        oddCount = 0;
    } else {
        while (number > 0) {
            int digit = number % 10; // Extract the last digit

            if (digit % 2 == 0) {
                evenCount++;        // Digit is even
            } else {
                oddCount++;         // Digit is odd
            }
            totalDigits++;          // Increment total digit count
            number /= 10;           // Remove the last digit
        }
    }                               //print the output
    cout << "Total digits: " << totalDigits << endl;
    cout << "Even digits: " << evenCount << endl;
    cout << "Odd digits: " << oddCount << endl;

    return 0;
}
