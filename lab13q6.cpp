#include <iostream>
using namespace std;
int main() {
    int a, b;                                       // declaring variable
    cout << "Enter the starting number a= ";
    cin >> a;
    cout << "Enter the ending number b= ";
    cin >> b;

    if (a > b) {                                       //invalid range
        cout << "Invalid range. The starting number a should be less than or equal to the ending number b." << endl;
    return 1;
    }
    int midpoint = (a + b) / 2;                         //calculating midpoint
    cout << "Midpoint: " << midpoint << endl;
    int current = a;
    while (current <= b) {           get the number in the range                   //while loop to get the number in the range  
        if (current < midpoint) {
            cout << current << " is less than the midpoint." << endl;
        } else if (current > midpoint) {
            cout << current << " is greater than the midpoint." << endl;
        } else {
            cout << current << " is equal to the midpoint." << endl;
        }
        current++;
    }

    return 0;
}
