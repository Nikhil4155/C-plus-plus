package Java;

class RBI {
    protected float minInterestRate = 4.0f; // Minimum interest rate set by RBI
    protected float minBalance = 500.0f;   // Minimum balance set by RBI
    protected float maxWithdrawalLimit = 50000.0f; // Maximum withdrawal limit set by RBI

    public void displayGuidelines() {
        System.out.println("RBI Guidelines:");
        System.out.println("Minimum Interest Rate: " + minInterestRate + "%");
        System.out.println("Minimum Balance: ₹" + minBalance);
        System.out.println("Maximum Withdrawal Limit: ₹" + maxWithdrawalLimit);
    }

    public float calculateInterest(float balance) {
        return (balance * minInterestRate) / 100; // Default interest calculation
    }
}

// Derived class: SBI
class SBI extends RBI {
    private float sbiInterestRate = 4.5f; // SBI-specific interest rate

    @Override
    public float calculateInterest(float balance) {
        return (balance * sbiInterestRate) / 100;
    }

    @Override
    public void displayGuidelines() {
        System.out.println("SBI Guidelines:");
        System.out.println("Interest Rate: " + sbiInterestRate + "%");
        System.out.println("Minimum Balance: ₹" + minBalance);
        System.out.println("Maximum Withdrawal Limit: ₹" + maxWithdrawalLimit);
    }
}

// Derived class: ICICI
class ICICI extends RBI {
    private float iciciInterestRate = 5.0f; // ICICI-specific interest rate

    @Override
    public float calculateInterest(float balance) {
        return (balance * iciciInterestRate) / 100;
    }

    @Override
    public void displayGuidelines() {
        System.out.println("ICICI Guidelines:");
        System.out.println("Interest Rate: " + iciciInterestRate + "%");
        System.out.println("Minimum Balance: ₹" + minBalance);
        System.out.println("Maximum Withdrawal Limit: ₹" + maxWithdrawalLimit);
    }
}

// Derived class: PNB
class PNB extends RBI {
    private float pnbInterestRate = 4.8f; // PNB-specific interest rate

    @Override
    public float calculateInterest(float balance) {
        return (balance * pnbInterestRate) / 100;
    }

    @Override
    public void displayGuidelines() {
        System.out.println("PNB Guidelines:");
        System.out.println("Interest Rate: " + pnbInterestRate + "%");
        System.out.println("Minimum Balance: ₹" + minBalance);
        System.out.println("Maximum Withdrawal Limit: ₹" + maxWithdrawalLimit);
    }
}

// Customer class
class Customer {
    private String name;
    private int accountNumber;
    private float balance;

    public Customer(String name, int accountNumber, float balance) {
        this.name = name;
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public float getBalance() {
        return balance;
    }

    public void displayCustomerDetails() {
        System.out.println("Customer Name: " + name);
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Balance: ₹" + balance);
    }
}

// Main class to demonstrate the functionality
public class BankSystem {
    public static void main(String[] args) {
        // Create customers
        Customer customer1 = new Customer("Alice", 101, 20000);
        Customer customer2 = new Customer("Bob", 102, 50000);

        // Use RBI reference to hold different bank objects (Dynamic Polymorphism)
        RBI bank;

        // SBI
        System.out.println("---- SBI Bank ----");
        bank = new SBI();
        bank.displayGuidelines();
        customer1.displayCustomerDetails();
        System.out.println("Interest Earned: ₹" + bank.calculateInterest(customer1.getBalance()));
        System.out.println();

        // ICICI
        System.out.println("---- ICICI Bank ----");
        bank = new ICICI();
        bank.displayGuidelines();
        customer2.displayCustomerDetails();
        System.out.println("Interest Earned: ₹" + bank.calculateInterest(customer2.getBalance()));
        System.out.println();

        // PNB
        System.out.println("---- PNB Bank ----");
        bank = new PNB();
        bank.displayGuidelines();
        customer1.displayCustomerDetails();
        System.out.println("Interest Earned: ₹" + bank.calculateInterest(customer1.getBalance()));
        System.out.println();
    }
}
