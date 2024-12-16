#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    string name;
    double balanceAmount;

public:
    BankAccount(int accountNumber, const string& name, double balanceAmount)
        : accountNumber(accountNumber), name(name), balanceAmount(balanceAmount) {}

    virtual void deposit(double amount) {
        balanceAmount += amount;
        cout << "Deposit successful. New balance: " << balanceAmount << endl;
    }

    virtual void withdraw(double amount) {
        if (balanceAmount >= amount) {
            balanceAmount -= amount;
            cout << "Withdrawal successful. New balance: " << balanceAmount << endl;
        } else {
            cout << "Insufficient balance. Cannot withdraw." << endl;
        }
    }

    virtual ~BankAccount() {} // Virtual destructor for proper cleanup
};

class SavingsAccount : public BankAccount {
private:
    double minimumBalance;

public:
    SavingsAccount(int accountNumber, const string& name, double balanceAmount, double minimumBalance)
        : BankAccount(accountNumber, name, balanceAmount), minimumBalance(minimumBalance) {}

    void withdraw(double amount) override {
        if (balanceAmount - amount >= minimumBalance) {
            BankAccount::withdraw(amount);
        } else {
            cout << "Cannot withdraw. Balance would fall below minimum balance." << endl;
        }
    }
};

class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CurrentAccount(int accountNumber, const string& name, double balanceAmount, double overdraftLimit)
        : BankAccount(accountNumber, name, balanceAmount), overdraftLimit(overdraftLimit) {}

    void withdraw(double amount) override {
        double allowedWithdrawal = balanceAmount + overdraftLimit;
        if (amount <= allowedWithdrawal) {
            balanceAmount -= amount;
            cout << "Withdrawal successful. New balance: " << balanceAmount << endl;
        } else {
            cout << "Cannot withdraw. Overdraft limit would be exceeded." << endl;
        }
    }
};

int main() {
    // Create a savings account with minimum balance
    SavingsAccount savingsAccount(12345, "John Doe", 5000, 1000);
    // Deposit and withdraw from savings account
    savingsAccount.deposit(1000);
    savingsAccount.withdraw(3000);

    // Create a current account with overdraft limit
    CurrentAccount currentAccount(67890, "Jane Smith", 2000, 500);
    // Deposit and withdraw from current account
    currentAccount.deposit(1500);
    currentAccount.withdraw(3000);

    return 0;
}
