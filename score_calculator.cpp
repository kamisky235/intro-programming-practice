// ============================================================
// STUDENT SCORE CALCULATOR - C++ VERSION
// This program asks for a student's name, course, and three
// test scores, then calculates and displays a report card.
// ============================================================

// Include the input/output stream library.
// This gives us access to cin (input) and cout (output).
#include <iostream>

// Include the string library.
// This gives us access to the 'string' data type.
#include <string>

// Include the iomanip library.
// This gives us access to setprecision for formatting decimals.
#include <iomanip>

// Use the standard namespace so we can write cout instead of std::cout.
using namespace std;

// The main function - where the program starts running.
int main() {

// --------------------------------------------------------
// VARIABLE DECLARATIONS
// Each variable is a storage box with a specific data type.
// --------------------------------------------------------

string studentName; // Text - stores the student's name
string course; // Text - stores the course (BBIT/BCS)

int score1, score2, score3; // Whole numbers - test scores
int totalScore; // Whole number - sum of scores

double average; // Decimal number - average score
double percentage; // Decimal number - percentage

// --------------------------------------------------------
// CONSTANT DECLARATION
// A constant cannot be changed during program execution.
// --------------------------------------------------------

const int MAX_SCORE = 100; // Maximum possible score per test

// --------------------------------------------------------
// WELCOME BANNER


// cout displays text on the screen.
// endl moves to a new line.
// --------------------------------------------------------

cout << "========================================" << endl;
cout << " STUDENT SCORE CALCULATOR" << endl;
cout << "========================================" << endl;
cout << endl;

// --------------------------------------------------------
// INPUT: STUDENT NAME
// getline reads the full line (including spaces).
// --------------------------------------------------------

cout << "Enter student name: ";
getline(cin, studentName);

// --------------------------------------------------------
// INPUT: COURSE
// --------------------------------------------------------

cout << "Enter course (BBIT/BCS): ";
getline(cin, course);

// --------------------------------------------------------
// INPUT: TEST SCORES

// cin >> reads numbers and stores them in int variables.
// --------------------------------------------------------

cout << "Enter score for Test 1: ";
cin >> score1;

cout << "Enter score for Test 2: ";
cin >> score2;

cout << "Enter score for Test 3: ";
cin >> score3;

// --------------------------------------------------------
// CALCULATIONS
// --------------------------------------------------------

totalScore = score1 + score2 + score3; // Add scores
average = totalScore / 3.0; // Decimal division
percentage = (totalScore / 300.0) * 100; // Percentage

// --------------------------------------------------------
// OUTPUT: REPORT CARD
// fixed << setprecision(2) formats decimals to 2 places.
// --------------------------------------------------------

cout << endl;


cout << "========================================" << endl;
cout << " REPORT CARD" << endl;
cout << "========================================" << endl;
cout << endl;

cout << "Student: " << studentName << endl;
cout << "Course: " << course << endl;
cout << endl;
cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;
cout << endl;
cout << "Total: " << totalScore << "/300" << endl;
cout << "Average: " << fixed << setprecision(2) << average << endl;
cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
cout << endl;

// Determine pass or fail using an if statement.
if (percentage >= 50) {
cout << "Result: PASS" << endl;
} else {
cout << "Result: FAIL" << endl;
}

cout << "========================================" << endl;

// Return 0 to signal successful completion.
return 0;
}