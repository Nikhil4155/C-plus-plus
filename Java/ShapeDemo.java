package Java;

// Abstract class Shape
abstract class Shape {
    protected int dimension1;
    protected int dimension2;

    // Constructor to initialize dimensions
    public Shape(int dimension1, int dimension2) {
        this.dimension1 = dimension1;
        this.dimension2 = dimension2;
    }

    // Abstract method to print the area
    public abstract void printArea();
}

// Class Rectangle extending Shape
class Rectangle extends Shape {

    // Constructor
    public Rectangle(int length, int width) {
        super(length, width);
    }

    @Override
    public void printArea() {
        int area = dimension1 * dimension2; // Area of rectangle = length × width
        System.out.println("Rectangle Area: " + area);
    }
}

// Class Triangle extending Shape
class Triangle extends Shape {

    // Constructor
    public Triangle(int base, int height) {
        super(base, height);
    }

    @Override
    public void printArea() {
        double area = 0.5 * dimension1 * dimension2; // Area of triangle = 1/2 × base × height
        System.out.println("Triangle Area: " + area);
    }
}

// Class Circle extending Shape
class Circle extends Shape {

    // Constructor (using only dimension1 as radius)
    public Circle(int radius) {
        super(radius, 0); // dimension2 is not used for Circle
    }

    @Override
    public void printArea() {
        double area = Math.PI * dimension1 * dimension1; // Area of circle = π × radius²
        System.out.println("Circle Area: " + area);
    }
}

// Main class
public class ShapeDemo {
    public static void main(String[] args) {
        // Create a Rectangle object
        Rectangle rectangle = new Rectangle(10, 5);
        rectangle.printArea();

        // Create a Triangle object
        Triangle triangle = new Triangle(10, 5);
        triangle.printArea();

        // Create a Circle object
        Circle circle = new Circle(7);
        circle.printArea();
    }
}

