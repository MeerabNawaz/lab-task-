// Program to find the largest of three numbers using nested if-else
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else {
        if (a >= b) {
            if (a >= c) {
                cout << "The largest number is " << a << "." << endl;
            } else {
                cout << "The largest number is " << c << "." << endl;
            }
        } else {
            if (b >= c) {
                cout << "The largest number is " << b << "." << endl;
            } else {
                cout << "The largest number is " << c << "." << endl;
            }
        }
    }

    return 0;
}

// Program to find the largest of three numbers using the ternary operator
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else {
        int largest = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
        cout << "The largest number is " << largest << "." << endl;
    }

    return 0;
}