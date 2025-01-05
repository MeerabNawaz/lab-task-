#include <iostream>
using namespace std;

int main() {
    // Admin credentials
    string adminEmail = "hello@uni";
    string adminPass = "hello321";

    // Program details using arrays
    const int numPrograms = 2;
    string programs[numPrograms] = {"CS", "AI"};
    int availableSeats[numPrograms] = {2, 3};
    float minCriteria[numPrograms] = {65.0, 60.0};
    int totalStudents[numPrograms] = {300, 240};

    // Main menu
    cout << "1. Admin login\n";
    cout << "2. Student login\n";
    int choice;
    cout << "Choose your login preference: ";
    cin >> choice;

    if (choice == 1) { // Admin Workflow
        string adminClaimedEmail, adminClaimedPass;
        cout << "Admin email: ";
        cin >> adminClaimedEmail;
        cout << "Admin pass: ";
        cin >> adminClaimedPass;

        if (adminClaimedEmail == adminEmail && adminClaimedPass == adminPass) {
            cout << "Admin Login successful\n";
            for (int i = 0; i < numPrograms; ++i) {
                cout << "Program: " << programs[i] << "seats"<<availableSeats[i]<<endl;
                cout << "Available seats: " << availableSeats[i] << "\n";
                cout << "Minimum eligibility criteria: " << minCriteria[i] << "%\n";
            }
        } else {
            cout << "Admin Login Failed\n";
        }
        return 0;
    } 
    cout << "Enter your name: ";
        cin >> studentNames[studentCount];
        cout << "Enter your CNIC: ";
        cin >> studentCnic[studentCount];
        cout << "Enter your phone number: ";
        cin >> studentPhone[studentCount];
        cout << "Enter your obtained marks: ";
        cin >> studentMarks[studentCount];

        float studentPercentage = (studentMarks[studentCount] / 500.0) * 100.0;
        cout << "Your percentage is: " << studentPercentage << "%" << endl;

        cout << "Available programs are:" << endl;
        for (int i = 0; i < programCount; i++) {
            cout << i + 1 << ". " << programs[i] << " Minimum Criteria: " << minimumCriteria[i] << "%)" << endl;
        }

        int choice;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        if (choice >= 1 && choice <= programCount) {
            int programIndex = choice - 1;
            if (studentPercentage >= minimumCriteria[programIndex]) {
                if (availableSeats[programIndex] > 0) {
                    cout << "Congratulations, you got admission in " << programs[programIndex] << "!" << endl;
                    availableSeats[programIndex]--;
                    studentProgram[studentCount] = programIndex;
                    studentCount++;
                } else {
                    cout << "You are not selected because no seats are available for " << programs[programIndex] << "." << endl;
                }
            } else {
                cout << "You did not meet the criteria for " << programs[programIndex] << "." << endl;
            }
        } else {
            cout << "Invalid program choice." << endl;
        }
    } else if (option == 3) {
        cout << "Logged out successfully." << endl;
    } else {
        cout << "Invalid option." << endl;
    }

    return 0;
}