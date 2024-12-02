#include <iostream> 
#include <sstream> 
using namespace std; 

class DATE { 
private:  
    int day, month, year;  
public:  
    DATE(int d, int m, int y) : day(d), month(m), year(y) {}     

    friend ostream& operator<<(ostream& out, const DATE& date);     
    friend int operator-(const DATE& d1, const DATE& d2);     
    friend DATE operator+(const DATE& d, int num);  
};  

ostream& operator<<(ostream& out, const DATE& date) {     
    out << date.day << "/" << date.month << "/" << date.year;     
    return out;  
}  

int operator-(const DATE& d1, const DATE& d2) {  
    // Convert both dates to days     
    int days1 = d1.year * 365 + d1.month * 30 + d1.day;     
    int days2 = d2.year * 365 + d2.month * 30 + d2.day;  

    // Calculate the difference     
    return days1 - days2;  
}  

DATE operator+(const DATE& d, int num) {  
    DATE result = d;     

    // Add 'num' days to the date     
    result.day += num;  

    // Adjust month and year if needed     
    while (result.day > 30) {  
        result.day -= 30;         
        result.month++;         
        if (result.month > 12) {             
            result.month = 1;             
            result.year++;  
        }     
    }     
    return result;  
}  

int main() {     
    int day, month, year;  
    cout << "Enter first date (dd/mm/yyyy): ";     
    cin >> day >> month >> year;     
    DATE d1(day, month, year);     

    cout << "Enter second date (dd/mm/yyyy): ";     
    cin >> day >> month >> year;     
    DATE d2(day, month, year);     

    int no_of_days = d1 - d2;     
    cout << "Difference between d1 and d2: " << no_of_days << " days" << endl;     

    DATE new_date = d1 + no_of_days;     
    cout << "New date after adding no_of_days to d1: " << new_date << endl;  

    return 0;  
}
