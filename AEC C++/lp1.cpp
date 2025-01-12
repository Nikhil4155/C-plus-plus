#include<iostream>
using namespace std;

class EMPLOYEE
{
    public:
    int empnum;
    string empname;
    float basic,da,it,netsal;

    void read()
    {
        cout<< "Enter the Employee number" ;
        cin >> empnum;
        cout<< "Enter the Employee name" ;
        cin >> empname;
        cout << "Enter basic Salary" ;
        cin >> basic;
    }

    void calc()
    { 
    da = (52.0/100)*basic;
    double gross = basic + da;
    it=(30.0/100)*gross;
    netsal=gross-it;

    }

    void display()
    {
        read();
        calc();
        cout<< "Employee Number is "<< empnum ;
        cout << "Employee Name is " << empname;
        cout<< "Net salary is " << netsal;
    }
};

int main()
{
    int n;
    cout << "Enter the total number of employee" ;
    cin >> n;
    EMPLOYEE emp[n];
    
    for(int i=0; i<n; i++)
    {
        emp[i].display();
    }
    return 0;
}

