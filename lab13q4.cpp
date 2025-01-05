#include <iostream>
using namespace std;
int main() {
    int x, end;                                                     // declaring variables
    cout << "Enter a number (x): ";
    cin >> x;
    if (x > 0) {
        cout << "Enter the end of the table: ";                     // enter any random value
        cin >> end;
        if (end < 1) {
            end = 10;
        }
        for (int i = 1; i <= end; i++) {                                    // multiplication
            cout << x << " x " << i << " = " << x * i << endl;
        }
    } else {
            cout << "Invalid Input. x must be greater than 0." << endl; // invalid response
    }

    return 0;
}
