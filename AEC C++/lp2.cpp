#include <iostream>
using namespace std;

class DATE {
private:
    int day, month, year;

public:
    DATE(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overload << operator to display dates
    friend ostream& operator<<(ostream& out, const DATE& date) {
        return out << date.day << "/" << date.month << "/" << date.year;
    }

    // Overload - operator to find the difference in days
    friend int operator-(const DATE& d1, const DATE& d2) {
        return (d1.year * 365 + d1.month * 30 + d1.day) -
               (d2.year * 365 + d2.month * 30 + d2.day);
    }

    // Overload + operator to add days to a date
    friend DATE operator+(const DATE& d, int num) {
        int newDay = d.day + num;
        int newMonth = d.month;
        int newYear = d.year;

        while (newDay > 30) {
            newDay -= 30;
            newMonth++;
            if (newMonth > 12) {
                newMonth = 1;
                newYear++;
            }
        }

        return DATE(newDay, newMonth, newYear);
    }
};

int main() {
    int day, month, year;

    // Input the first date
    cout << "Enter first date (dd mm yyyy): ";
    cin >> day >> month >> year;
    DATE d1(day, month, year);

    // Input the second date
    cout << "Enter second date (dd mm yyyy): ";
    cin >> day >> month >> year;
    DATE d2(day, month, year);

    // Calculate and display the difference in days
    int no_of_days = d1 - d2;
    cout << "Difference between d1 and d2: " << no_of_days << " days\n";

    // Add the difference in days to d1 and display the new date
    cout << "New date after adding difference to d1: " << (d1 + no_of_days) << endl;

    return 0;
}

