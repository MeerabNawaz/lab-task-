#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;                            //declaring the variable
    cout << "Enter a number = ";                    //input the number
    cin >> number;
    for (int i = 1; i <= number; i += 2) {          // Use a for loop to calculate the sum of odd numbers         
        sum += i; // Add the current odd number to the sum
    }
    cout << "Sum of all odd numbers between 1 and " << number << " is: " << sum << endl;// Print the result
    return 0;
}
