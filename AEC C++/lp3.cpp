
#include<iostream>
using namespace std;

class Numbers
{
    public:
    int num;
    public:
    void setnum(int number)
    {
        num = number;
    }
};

class Hexadecimal : public Numbers{
    public:
    void display()
    {
        cout<< "The hexadecimal conversion of the number is" <<hex<<num ;
    }
};
class Octal : public Numbers{
    public:
    void display()
    {
        cout<< "The Octal conversion of the number is" <<oct<<num ;
    }
};
class Decimal : public Numbers{
    public:
    void display()
    {
        cout<< "The Decimal conversion of the number is" <<dec<<num ;
    }
};

int main()
{
    int n=15;
    Numbers obj1;
    obj1.setnum(n);

    Hexadecimal obj2;
    Octal obj3;
    Decimal obj4;
    
    obj2.setnum(obj1.num);
    obj3.setnum(obj1.num);
    obj4.setnum(obj1.num);

    obj2.display();
    obj3.display();
    obj4.display();

}