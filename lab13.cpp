#include <iostream>
using namespace std;

int main() {                                        //declaring variables
    int number, reversedNumber = 0, sumOfDigits = 0;
    cout << "Enter a number = ";                    //input a number
    cin >> number;
    int originalNumber = number;
    while (number>0) {                              //using while loop to reverse the entered the input
    int digit = number % 10;
    reversedNumber = reversedNumber * 10 + digit;
    sumOfDigits += digit;
    number /= 10;
    }                                               //print output of reversed number and their summ
    cout << "Reversed Number =" << reversedNumber << endl;
    cout << "Sum of Digits =" << sumOfDigits << endl;

    return 0;
}
