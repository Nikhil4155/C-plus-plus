package Java;

// Base class Calculator
class Calculator {
    protected double number1;
    protected double number2;

    // Parameterized constructor
    public Calculator(double number1, double number2) {
        this.number1 = number1;
        this.number2 = number2;
    }

    // Basic arithmetic operations
    public double add() {
        return number1 + number2;
    }

    public double sub() {
        return number1 - number2;
    }

    public double mul() {
        return number1 * number2;
    }

    public double div() {
        if (number2 != 0) {
            return number1 / number2;
        } else {
            throw new ArithmeticException("Division by zero is not allowed.");
        }
    }

    // Method to display results
    public void displayResults(String operation, double result) {
        System.out.println("The result of " + operation + " is: " + result);
    }
}

// Derived class AdvancedCalculator
class AdvancedCalculator extends Calculator {

    // Constructor using super to initialize base class data members
    public AdvancedCalculator(double number1, double number2) {
        super(number1, number2);
    }

    // Additional operations
    public double mod() {
        return number1 % number2;
    }

    public double sqrt(double number) {
        if (number >= 0) {
            return Math.sqrt(number);
        } else {
            throw new ArithmeticException("Square root of a negative number is not defined.");
        }
    }

    // Overridden method to display results
    @Override
    public void displayResults(String operation, double result) {
        System.out.println("Advanced Calculator Result:");
        super.displayResults(operation, result);
    }
}

// Main class to demonstrate functionality
public class CalculatorDemo {
    public static void main(String[] args) {
        // Initialize the calculator
        AdvancedCalculator calc = new AdvancedCalculator(25, 4);

        // Perform and display basic operations
        calc.displayResults("Addition", calc.add());
        calc.displayResults("Subtraction", calc.sub());
        calc.displayResults("Multiplication", calc.mul());
        calc.displayResults("Division", calc.div());

        // Perform and display advanced operations
        calc.displayResults("Modulus", calc.mod());
        calc.displayResults("Square Root of number1", calc.sqrt(calc.number1));
        calc.displayResults("Square Root of number2", calc.sqrt(calc.number2));
    }
}

