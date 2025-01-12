#include<iostream>
using namespace std;

template<typename T>
class Calculator{
    public:
    T add(T a, T b)
    {
        return a+b;
    }
    T sub(T a, T b)
    {
        return a-b;
    }
    T mul(T a, T b)
    {
        return a*b;
    }
    T div(T a, T b)
    {
        if (b==0)
        {
            cout<< "Division is not possible" ;
            return 0;
        }
        else
            return a/b;
    }
};

int main()
{
    Calculator <double> calc;
    double num1,num2;
    cout<< "Enter the first number" ;
    cin >> num1;
    cout<< "Enter the second Number" ;
    cin >> num2;
    char op;
    cout << "Enter the operations(+,-,*,/)";
    cin >> op;

    switch (op)
    {
    case '+':
        cout<< calc.add(num1,num2) ;
        break;
    
    case '-':
        cout << calc.sub(num1,num2);
        break;
    
    case '*':
        cout << calc.mul(num1,num2);
        break;
    
    case '/':
        cout << calc.div(num1,num2);
        break;
    
    default:
        cout<< "Wrong Operations Selected";
        break;
    }

}