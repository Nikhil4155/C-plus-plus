#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter the value of a" ;
    cin >> a;
    cout << "Enter the value of b" ;
    cin >> b;
    
    try
    {
        a/b;
    }
    catch()
    {
        std::cerr << e.what() << '\n';
    }
    
}