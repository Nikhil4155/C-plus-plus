#include <iostream>
using namespace std;

// Base class: Agent
class Agent {
protected:
    float commissionRate; // Protected member to store the commission rate

public:
    // Constructor to initialize the commission rate
    Agent(float rate) : commissionRate(rate) {}

    // Function to calculate the commission based on the sale value
    float calculateCommission(float saleValue) {
        return commissionRate * saleValue;
    }
};

// Derived class: Salesperson
class Salesperson : public Agent {
public:
    // Constructor to initialize the base class with the commission rate
    Salesperson(float rate) : Agent(rate) {}

    // Function to print the commission for a given sale value
    void printCommission(float saleValue) {
        float commission = calculateCommission(saleValue);
        cout << "Agent's commission for sale value $ " << saleValue 
             << " is $ " << commission << endl;
    }
};

// Main function
int main() {
    float commissionRate;
    // Input commission rate
    cout << "Enter the commission rate for the salesperson (in decimal): ";
    cin >> commissionRate;

    // Create an object of Salesperson with the given commission rate
    Salesperson salesAgent(commissionRate);

    float saleValue;
    // Input the sale value
    cout << "Enter the sale value: $";
    cin >> saleValue;

    // Print the commission
    salesAgent.printCommission(saleValue);

    return 0; // Indicate successful program termination
}
