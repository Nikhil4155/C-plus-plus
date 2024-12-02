#include <iostream>
using namespace std;

class number {
public:
    int num;

public:
    void setNum(int n) {
        num = n;
    }
};

class HEXADECIMAL : public number {
public:
    void display() {
        cout << "Hexadecimal Value is : " << hex << num;
    }
};

class DECIMAL : public number {
public:
    void display() {
        cout << "\nDecimal Value is : " << dec << num;
    }
};

class OCTAL : public number {
public:
    void display() {
        cout << "\nOctal Value is : " << oct << num;
    }
};

int main() {
    number obj1;
    HEXADECIMAL hObj;
    DECIMAL dObj;
    OCTAL oObj;

    obj1.setNum(10);

    hObj.setNum(obj1.num);
    dObj.setNum(obj1.num);
    oObj.setNum(obj1.num);

    cout << endl << "Values Displayed in Respective Number Systems" << endl;

    hObj.display();
    dObj.display();
    oObj.display();

    return 0;
}
