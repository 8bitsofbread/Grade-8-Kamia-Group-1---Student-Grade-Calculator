#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to find highest grade
double findHighest(double g1, double g2, double g3, double g4, double g5) {
    double max = g1;
    if (g2 > max) max = g2;
    if (g3 > max) max = g3;
    if (g4 > max) max = g4;
    if (g5 > max) max = g5;
    return max;
}

// Function to find lowest grade
double findLowest(double g1, double g2, double g3, double g4, double g5) {
    double min = g1;
    if (g2 < min) min = g2;
    if (g3 < min) min = g3;
    if (g4 < min) min = g4;
    if (g5 < min) min = g5;
    return min;
}

// Function to count passing subjects (>= 60)
int countPassing(double g1, double g2, double g3, double g4, double g5) {
    int count = 0;
    if (g1 >= 60) count++;
    if (g2 >= 60) count++;
    if (g3 >= 60) count++;
    if (g4 >= 60) count++;
    if (g5 >= 60) count++;
    return count;
}

int main() {
    string name, dlStatus;
    float id, age, level, mathGrade, scienceGrade, englishGrade, historyGrade, artGrade;
    double average, GradeEquivalent;

    cout << "========================================\n";
    cout << "        STUDENT GRADE CALCULATOR        \n";
    cout << "========================================\n\n";

    cout << "=== STUDENT PROFILE SETUP ===\n\n";

    cout << "Enter name: ";
    while (true) {
        getline(cin, name);
        if (name.empty()) {
            cout << "Invalid name (empty). Try again: ";
        } else {
            break;
        }
    }

    cout << "Enter ID number: ";
    while (true) {
        cin >> id;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid ID. Try again: ";
        } else {
            break;
        }
    }

    cout << "Enter age: ";
    while (true) {
        cin >> age;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid age. Try again: ";
        } else {
            break;
        }
    }

    cout << "Enter grade level: ";
    while (true) {
        cin >> level;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid level. Try again: ";
        } else {
            break;
        }
    }

    cout << "\nProfile created successfully!\n\n";

    cout << "=== GRADE ENTRY ===\n\n";

    cout << "Enter math grade: ";
    while (true) {
        cin >> mathGrade;
        if (cin.fail() || mathGrade < 0 || mathGrade > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid math grade (0-100). Try again: ";
        } else {
            break;
        }
    }

    cout << "Enter science grade: ";
    while (true) {
        cin >> scienceGrade;
        if (cin.fail() || scienceGrade < 0 || scienceGrade > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid science grade (0-100). Try again: ";
        } else {
            break;
        }
    }

    cout << "Enter english grade: ";
    while (true) {
        cin >> englishGrade;
        if (cin.fail() || englishGrade < 0 || englishGrade > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid english grade (0-100). Try again: ";
        } else {
            break;
        }
    }

    cout << "Enter history grade: ";
    while (true) {
        cin >> historyGrade;
        if (cin.fail() || historyGrade < 0 || historyGrade > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid history grade (0-100). Try again: ";
        } else {
            break;
        }
    }

    cout << "Enter art grade: ";
    while (true) {
        cin >> artGrade;
        if (cin.fail() || artGrade < 0 || artGrade > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid art grade (0-100). Try again: ";
        } else {
            break;
        }
    }

    // === Calculations ===
    average = (mathGrade + scienceGrade + englishGrade + historyGrade + artGrade) / 5;

    if (average >= 96) GradeEquivalent = 1.0;
    else if (average >= 94) GradeEquivalent = 1.25;
    else if (average >= 92) GradeEquivalent = 1.5;
    else if (average >= 90) GradeEquivalent = 1.75;
    else if (average >= 88) GradeEquivalent = 2.0;
    else if (average >= 86) GradeEquivalent = 2.25;
    else if (average >= 84) GradeEquivalent = 2.5;
    else if (average >= 82) GradeEquivalent = 2.75;
    else if (average >= 80) GradeEquivalent = 3.0;
    else GradeEquivalent = 5.0;

    // Checks if user is DL or not
    if (GradeEquivalent < 1.500) dlStatus = "YES ( Congratulations! )";
    else dlStatus = "No ( Better luck next time :( )";

    // Highest, Lowest, Passing
    double highest = findHighest(mathGrade, scienceGrade, englishGrade, historyGrade, artGrade);
    double lowest  = findLowest(mathGrade, scienceGrade, englishGrade, historyGrade, artGrade);
    int passing    = countPassing(mathGrade, scienceGrade, englishGrade, historyGrade, artGrade);

    cout << "\nGrades recorded successfully!\n";

    cout << "\n==========================================\n";
    cout << "             STUDENT REPORT CARD          \n";
    cout << "==========================================\n\n";

    cout << "===STUDENT INFORMATION===\n";

    cout << "Name: " << name << endl;
    cout << "Student ID: " << id << endl;
    cout << "Student Age: " << age << endl;
    cout << "Grade Level: " << level << endl << endl;

    cout << "===STUDENT GRADES===\n";

    cout << "Math: " << mathGrade << "%" << endl;
    cout << "Science: " << scienceGrade<< "%" << endl;
    cout << "English: " << englishGrade << "%" << endl;
    cout << "History: " << historyGrade << "%" << endl;
    cout << "Art: " << artGrade << "%" << endl << endl;

    cout << "===GRADE STATISTICS===\n";

    cout << "Average Grade: " << average << "%" << endl;
    cout << "Grade Equivalent: " << GradeEquivalent << endl;
    cout << "Highest Grade: " << highest << "%" << endl;
    cout << "Lowest Grade: " << lowest << "%" << endl;
    cout << "Subjects Passing: " << passing << " out of 5" << endl << endl;

    cout << "GWA: " << GradeEquivalent << endl;
    cout << "Director's List Status: " << dlStatus << endl;
    return 0;
}