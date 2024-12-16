#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open the file
    ifstream file("sample.txt");

    // Check if the file is open
    if (file.is_open()) {
        string line;
        // Read file line by line
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close(); // Close the file
    } else {
        cout << "Error: cannot open the file." << endl;
    }

    return 0;
}
