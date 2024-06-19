#include <iostream>
#include <algorithm>
using namespace std;

// Maximum number of students
const int MAXSTUDENTS = 100;

// Function to input student marks
void inputMarks(int marks[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for student " << (i + 1) << ": ";
        cin >> marks[i];
    }
}

// Function to print student marks
void printMarks(const int marks[], int n) {
    cout << "Student marks: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
}

// Function to calculate the average marks
double calculateAverage(const int marks[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return static_cast<double>(sum) / n;
}

// Function to find the highest mark
int findHighestMark(const int marks[], int n) {
    int highest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}

// Function to find the lowest mark
int findLowestMark(const int marks[], int n) {
    int lowest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    return lowest;
}

// Main function
int main() {
    int marks[MAXSTUDENTS];
    int numStudents;

    // Input number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Ensure the number of students is within the valid range
    if (numStudents <= 0 || numStudents > MAXSTUDENTS) {
        cerr << "Invalid number of students. Please enter a value between 1 and "
             << MAXSTUDENTS << endl;
        return 1;
    }

    // Input marks
    inputMarks(marks, numStudents);

    // Print marks
    printMarks(marks, numStudents);

    // Calculate and print average marks
    double average = calculateAverage(marks, numStudents);
    cout << "Average marks: " << average << endl;

    // Find and print the highest mark
    int highestMark = findHighestMark(marks, numStudents);
    cout << "Highest mark: " << highestMark << endl;

    // Find and print the lowest mark
    int lowestMark = findLowestMark(marks, numStudents);
    cout << "Lowest mark: " << lowestMark << endl;

    return 0;
}
