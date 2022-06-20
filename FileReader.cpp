#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Vars to Accomplish tasks
    ifstream inputFile;
    ofstream outputFile;
    string fileName;

    // vars for each person
    string firstName;
    string lastName;
    double oldSalary;
    double newSalary;
    double payIncrease;

    // Pronpt User for file name
    cout << "File Name: ";
    cin >> fileName;

    // Openning the file
    inputFile.open(fileName);
    outputFile.open("input.dat");

    // 'Set percision label on output file
    outputFile << fixed << showpoint << setprecision(2);

    // Loop through input and write to output
    while (!inputFile.eof()) {
        inputFile >> lastName >> firstName >> oldSalary >> payIncrease;
        newSalary = oldSalary + (oldSalary * payIncrease) / 100;
        outputFile << firstName << ' ' << lastName << ' ' << newSalary << endl;
    }

    // Close both Files & exit the program
    inputFile.close();
    outputFile.close();

    return 0;

}