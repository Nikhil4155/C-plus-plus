#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char product[20];
    int price;

    cout << "Enter product name and price: ";
    cin >> product >> price;

    ofstream outfile("product.txt");
    if (!outfile) {
        cout << "Error couldn't open the file for writing\n";
        return 1;
    }
    outfile << product << endl << price << endl;
    outfile.close(); // Explicitly close the output file

    ifstream infile("product.txt");
    if (!infile) {
        cout << "Error couldn't open the file for reading\n";
        return 1;
    }
    infile >> product >> price;
    infile.close(); // Explicitly close the input file

    cout << "The product read: " << product << endl;
    cout << "The price read: " << price << endl;

    return 0;
}
