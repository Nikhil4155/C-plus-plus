#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    Student(string name, int rollNo) : name(name), rollNo(rollNo) {}

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// Test class (inherits from Student)
class Test : public Student {
protected:
    int marks[6];

public:
    Test(string name, int rollNo, const int marks[]) : Student(name, rollNo) {
        for (int i = 0; i < 6; i++) {
            this->marks[i] = marks[i];
        }
    }

    void displayMarks() {
        cout << "Marks: ";
        for (int i = 0; i < 6; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Result class (inherits from Test)
class Result : public Test {
private:
    int totalMarks;
    float percentage;

public:
    Result(string name, int rollNo, const int marks[]) : Test(name, rollNo, marks) {
        calculateTotalAndPercentage();
    }

    void calculateTotalAndPercentage() {
        totalMarks = 0;
        for (int i = 0; i < 6; i++) {
            totalMarks += marks[i];
        }
        percentage = (float)totalMarks / 600 * 100;
    }

    void displayResult() {
        displayStudentInfo();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    int marks[] = {85, 92, 78, 89, 95, 81};
    Result student("John Doe", 123, marks);
    student.displayResult();
    return 0;
}
