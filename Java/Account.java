package Java;

public class Account {
    private int accNo;
    private String name;
    private long phoneNo; // Use long for larger phone numbers
    private float balanceAmt;

    // a. CreateAccount() method to create an account
    public void createAccount(int accNo, String name, long phoneNo, float initialBalance) {
        this.accNo = accNo;
        this.name = name;
        this.phoneNo = phoneNo;
        this.balanceAmt = initialBalance;
        System.out.println("Account created successfully.");
    }

    // b. Deposit() method to deposit amount to an account
    public void deposit(float amount) {
        if (amount > 0) {
            balanceAmt += amount;
            System.out.println("Deposited: " + amount);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }

    // c. Withdraw() method to withdraw amount from an account
    public void withdraw(float amount) {
        if (amount > 0 && amount <= balanceAmt) {
            balanceAmt -= amount;
            System.out.println("Withdrawn: " + amount);
        } else if (amount > balanceAmt) {
            System.out.println("Insufficient balance.");
        } else {
            System.out.println("Invalid withdrawal amount.");
        }
    }

    // d. PrintAccount() method to display account details
    public void printAccount() {
        System.out.println("Account Details:");
        System.out.println("Account Number: " + accNo);
        System.out.println("Name: " + name);
        System.out.println("Phone Number: " + phoneNo);
        System.out.println("Balance: " + balanceAmt);
    }

    // Main method to test the class
    public static void main(String[] args) {
        Account myAccount = new Account();

        // Create an account
        myAccount.createAccount(123456, "John Doe", 9876543210L, 1000.0f);

        // Deposit some money
        myAccount.deposit(500.0f);

        // Withdraw some money
        myAccount.withdraw(300.0f);

        // Print account details
        myAccount.printAccount();
    }
}
