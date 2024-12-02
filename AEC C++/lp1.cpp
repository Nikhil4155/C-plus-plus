#include <iostream>
#include <string>
using namespace std;

class EMPLOYEE {
    int emp_num;
    string emp_name;
    double Basic, DA, IT, Net_Salary;

    void read() {
        cout << "\nEnter employee name: ";
        cin >> emp_name;
        cout << "\nEnter employee number: ";
        cin >> emp_num;
        cout << "\nEnter Basic salary: ";
        cin >> Basic;
    }

    void calc() {
        DA = (52.0 / 100) * Basic;
        double gross = Basic + DA;
        IT = (30.0 / 100) * gross;
        Net_Salary = gross - IT;
    }

public:
    void display() {
        read();
        calc();
        cout << "\nEmployee name: " << emp_name;
        cout << "\nEmployee number: " << emp_num;
        cout << "\nBasic salary: " << Basic;
        cout << "\nDA: " << DA;
        cout << "\nIT: " << IT;
        cout << "\nNet salary: " << Net_Salary << endl;
    }
};

int main() {
    int N;
    cout << "\nEnter number of employees: ";
    cin >> N;

    EMPLOYEE emp[N];

    for (int i = 0; i < N; i++) {
        cout << "\nDetails for employee " << i + 1 << ":";
        emp[i].display();
    }

    return 0;
}
