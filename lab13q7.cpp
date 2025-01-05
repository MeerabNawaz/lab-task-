#include <iostream>
using namespace std;
int main() {
    int number, count = 0;                          //declaring variable
    cout << "Enter a number = ";                    //input the number
    cin >> number;
    if (number <= 0) {                              // Check if number is valid
        cout << "No numbers to process." << endl;
    } else {
        cout << "Numbers divisible by 3 = ";

        // Use a for loop to iterate through numbers from 1 to n
        for (int i = 1; i <= number; i++) {
            if (i % 3 == 0) {                   // Check if the number is divisible by 3
                cout << i << " ";                   
                count++;                            
            }
        }
        cout << endl << "Count = " << count << endl; // print the numbers divisible
    }

    return 0;
}
