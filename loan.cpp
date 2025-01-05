#include <iostream>
using namespace std;

int main() {

    string adminEmail = "admin@uni.com";
    string adminPassword = "admin";
    string adminclaimedEmail;
    string adminclaimedpassword;

    string program1 = "Computer Science", program2 = "Software Engineering", program3 = "Data Science";
    int maxSeats1 = 2, maxSeats2 = 2, maxSeats3 = 2;
    float minEligibility1 = 80.0, minEligibility2 = 75.0, minEligibility3 = 70.0;

    string studentName, studentEmail, studentProgram;
    float studentPercentage;

    cout << "Uni Management System" << endl;
    cout << "1 Admin login " << endl;
    cout << "2 Apply as a Student" << endl;

    int choice;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {

        cout << "To login as a Admin Enter Your ID & Password" << endl;
        cout << "Admin Email=";
        cin >> adminclaimedEmail;
        cout << "Admin Password=";
        cin >> adminclaimedpassword;

        if (adminclaimedEmail == adminEmail && adminclaimedpassword == adminPassword) {
            cout << "Admin login Successful" << endl;

            cout << "Available Programs:" << endl;
            cout << "1. " << program1 << " (Max Seats: " << maxSeats1 << ", Min Eligibility: " << minEligibility1 << "%)" << endl;
            cout << "2. " << program2 << " (Max Seats: " << maxSeats2 << ", Min Eligibility: " << minEligibility2 << "%)" << endl;
            cout << "3. " << program3 << " (Max Seats: " << maxSeats3 << ", Min Eligibility: " << minEligibility3 << "%)" << endl;
        }
        else {
            cout << "Admin login failed" << endl;
        }

    }
    else if (choice == 2) {

        cout << "Student Admission Form" << endl;
        cout << "Enter your Name: ";
        cin >> studentName;
        cout << "Enter your Email: ";
        cin >> studentEmail;
        cout << "Enter your Percentage: ";
        cin >> studentPercentage;

        cout << "Available Programs:" << endl;
        cout << "1. " << program1 << endl;
        cout << "2. " << program2 << endl;
        cout << "3. " << program3 << endl;

        cout << "Choose your Program (1-3): ";
        int programChoice;
        cin >> programChoice;

        if (programChoice < 1 || programChoice > 3) {
            cout << "Invalid Program Choice." << endl;
            return 0;
        }

        if (programChoice == 1) {
            if (studentPercentage >= minEligibility1) {
                if (maxSeats1 > 0) {
                    maxSeats1--;
                    studentProgram = program1;
                    cout << "Congratulations " << studentName << "! You have been admitted to " << studentProgram << endl;
                    cout << "Remaining Seats in " << studentProgram << ": " << maxSeats1 << endl;
                }
                else {
                    cout << "Sorry, no available seats in " << program1 << " Please choose another program" << endl;
                }
            }
            else {
                cout << "Sorry, you do not meet the eligibility criteria for " << program1 << endl;;
            }
        }
        else if (programChoice == 2) {
            if (studentPercentage >= minEligibility2) {
                if (maxSeats2 > 0) {
                    maxSeats2--;
                    studentProgram = program2;
                    cout << "Congratulations " << studentName << "! You have been admitted to " << studentProgram << endl;
                    cout << "Remaining Seats in " << studentProgram << ": " << maxSeats2 << endl;
                }
                else {
                    cout << "Sorry, no available seats in " << program2 << " Please choose another program" << endl;
                }
            }
            else {
                cout << "Sorry, you do not meet the eligibility criteria for " << program2 << endl;;
            }
        }
        else if (programChoice == 3) {
            if (studentPercentage >= minEligibility3) {
                if (maxSeats3 > 0) {
                    maxSeats3--;
                    studentProgram = program3;
                    cout << "Congratulations " << studentName << "! You have been admitted to " << studentProgram << endl;
                    cout << "Remaining Seats in " << studentProgram << ": " << maxSeats3 << endl;
                }
                else {
                    cout << "Sorry, no available seats in " << program3 << " Please choose another program" << endl;
                }
            }
            else {
                cout << "Sorry, you do not meet the eligibility criteria for " << program3 << endl;
            }
        }
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}