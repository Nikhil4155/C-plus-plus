#include<iostream>
using namespace std;

class Count{
    public:
    int value;

    public:
    Count()
    {
        this->value=5;
    }

    void operator ++()
    {
        ++value;
    }
     
    public:
    void display()
    {
        cout<< "The value after incrementing is:" << value;
    }
};

int main()
{
    Count count1;
    
    ++count1;

    count1.display();
}