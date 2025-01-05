#include <iostream>
using namespace std;

int main() {
    float smarks1, smarks2, smarks3;
    short totalmarks = 100;
    short CSseatsavailable = 10;
    short SEseatsavailable = 7;
    int CSstudents = 550;
    int SEstudents = 700;
    string cnic1, cnic2, cnic3, ph1, ph2, ph3, roll1, roll2, roll3, st1, st2, st3;

    cout << "Enter the name for the first student" << endl;
    cin >> st1;
    cout << "Enter the name for the second student" << endl;
    cin >> st2;
    cout << "Enter the name for the third student" << endl;
    cin >> st3;

    cout << "Enter " << st1 << "'s CNIC" << endl;
    cin >> cnic1;
    cout << "Enter " << st2 << "'s CNIC" << endl;
    cin >> cnic2;
    cout << "Enter " << st3 << "'s CNIC" << endl;
    cin >> cnic3;

    cout << "Enter " << st1 << "'s Roll Number" << endl;
    cin >> roll1;
    cout << "Enter " << st2 << "'s Roll Number" << endl;
    cin >> roll2;
    cout << "Enter " << st3 << "'s Roll Number" << endl;
    cin >> roll3;

    cout << "Enter " << st1 << "'s Phone Number" << endl;
    cin >> ph1;
    cout << "Enter " << st2 << "'s Phone Number" << endl;
    cin >> ph2;
    cout << "Enter " << st3 << "'s Phone Number" << endl;
    cin >> ph3;

    cout << "Enter " << st1 << "'s subject marks" << endl;
    cin >> smarks1;
    float percentage1 = (smarks1 / totalmarks) * 100;

    cout << "Enter " << st2 << "'s subject marks" << endl;
    cin >> smarks2;
    float percentage2 = (smarks2 / totalmarks) * 100;

    cout << "Enter " << st3 << "'s subject marks" << endl;
    cin >> smarks3;
    float percentage3 = (smarks3 / totalmarks) * 100;

    if (CSseatsavailable > 0) {
        if (percentage1 > 70) {
            cout << st1 << " is eligible for admission in CS" << endl;
            CSseatsavailable--;
            CSstudents++;
        } else {
            cout << st1 << " is not eligible for admission in CS" << endl;
        }
    } else {
        cout << "Seats not available in CS" << endl;
    }

    if (SEseatsavailable > 0) {
        if (percentage1 > 60) {
            cout << st1 << " is eligible for admission in SE" << endl;
            SEseatsavailable--;
            SEstudents++;
        } else {
            cout << st1 << " is not eligible for admission in SE" << endl;
        }
    } else {
        cout << "Seats not available in SE" << endl;
    }

    // Repeat the same checks for the second student (st2)
    if (CSseatsavailable > 0) {
    if (percentage2 > 70) {
    cout << st2 << " is eligible for admission in CS" << endl;
            CSseatsavailable--;
            CSstudents++;
        } else {
            cout << st2 << " is not eligible for admission in CS" << endl;
        }
    } else {
        cout << "Seats not available in CS" << endl;
    }

    if (SEseatsavailable > 0) {
        if (percentage2 > 60) {
            cout << st2 << " is eligible for admission in SE" << endl;
            SEseatsavailable--;
            SEstudents++;
        } else {
            cout << st2 << " is not eligible for admission in SE" << endl;
        }
    } else {
        cout << "Seats not available in SE" << endl;
    }

    if (CSseatsavailable > 0) {
        if (percentage3 > 70) {
            cout << st3 << " is eligible for admission in CS" << endl;
            CSseatsavailable--;
            CSstudents++;
        } else {
            cout << st3 << " is not eligible for admission in CS" << endl;
        }
    } else {
        cout << "Seats not available in CS" << endl;
    }

    if (SEseatsavailable > 0) {
        if (percentage3 > 60) {
            cout << st3 << " is eligible for admission in SE" << endl;
            SEseatsavailable--;
            SEstudents++;
        } else {
            cout << st3 << " is not eligible for admission in SE" << endl;
        }
    } else {
        cout << "Seats not available in SE" << endl;
    }
return 0;
 
}