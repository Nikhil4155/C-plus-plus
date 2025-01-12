#include<iostream>
using namespace std;

class Complex
{
    public:
    int real;
    int imag;

    public:
    Complex()
    {
        this->real=0;
        this->imag=0;
    }

    void input()
    {
        cout << "Enter the real and imaginary numbers" ;
        cin >> real >> imag;
    }

    Complex operator + (Complex C2)
    {
        Complex temp;
        temp.real = real + C2.real;
        temp.imag = imag + C2.imag;
        return temp;
    }

    void output()
    {
        if(imag < 0)
            cout << real << imag << "i";
        else
            cout << real << "+" << imag << "i";
    }
};

int main()
{
    Complex c1,c2,result;

    cout << "Enter the first real numbers" ;
    c1.input();

    cout << "Enter the second real numbers" ;
    c2.input();

    result = c1+c2;

    result.output();
}