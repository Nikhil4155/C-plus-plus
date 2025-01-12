#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int roll;

    public:
    Student(string name,int rollno)
    {
        this->name = name;
        this->roll= rollno;
    }
    void displaystudentinfo()
    {
        cout << "Student Name" << name;
        cout << "Student Roll Number" << roll;
    }
};

class Test : public Student{
    public:
    int marks[3];
    public:
    Test(string name, int roll ,const int marks[]) : Student(name, roll)
    {
    // cout<< "Enter  the marks" ;
    //     for(int i=0; i<3; i++)
    //     {
    //         cin >> marks[i];
    //     }
    }
};

class Result : public Test{
    public:
    int totalmarks=0;
    double percentage;

    public:
    Result(string name, int roll,const int marks[]) : Test(name,roll,marks)
    {
        calculatetotalmarksandpercentage();
    }

    public:
    void calculatetotalmarksandpercentage()
    {
        for (int i = 0; i < 3; i++)
        {
            totalmarks += marks[i];
        }
        percentage = totalmarks/3;
        cout<<" Total Marks Obtained is"<< totalmarks;
        cout<<" percentage Obtained is"<< percentage;
    }

    public:
    void displayresult()
    {
        cout << "Student Name" << name;
        cout << "Student Roll Number" << roll;
        calculatetotalmarksandpercentage();
    }

};

int main()
{
    int marks[] = {75,60,95};
    Result r("Nikhil" , 148, marks);
    r.displayresult();
}
