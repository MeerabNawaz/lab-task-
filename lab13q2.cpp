#include <iostream>
using namespace std;
int main() {
    int number;                             // take a number as input
    cout << "Enter a number: ";
    cin >> number;                          // use for loop to iterate from 1 to n
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
         cout << i << ":even" << endl;
         } else {
            cout << i << ":odd" << endl;
         }
         
    }
    return 0;
}