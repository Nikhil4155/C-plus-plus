package Java;

// Abstract class Vehicle
abstract class Vehicle {
    protected int yearOfManufacture;

    // Constructor
    public Vehicle(int yearOfManufacture) {
        this.yearOfManufacture = yearOfManufacture;
    }

    // Abstract methods
    public abstract void getData();
    public abstract void putData();
}

// Derived class Two-wheeler
class TwoWheeler extends Vehicle {
    protected String type; // Type of two-wheeler (e.g., bike, scooter)

    // Constructor
    public TwoWheeler(int yearOfManufacture) {
        super(yearOfManufacture);
    }

    @Override
    public void getData() {
        System.out.println("Two-wheeler Data Collected");
    }

    @Override
    public void putData() {
        System.out.println("Two-wheeler Details:");
        System.out.println("Year of Manufacture: " + yearOfManufacture);
    }
}

// Final class Four-wheeler
final class FourWheeler extends Vehicle {
    private String model;

    // Constructor
    public FourWheeler(int yearOfManufacture, String model) {
        super(yearOfManufacture);
        this.model = model;
    }

    @Override
    public void getData() {
        System.out.println("Four-wheeler Data Collected");
    }

    @Override
    public void putData() {
        System.out.println("Four-wheeler Details:");
        System.out.println("Year of Manufacture: " + yearOfManufacture);
        System.out.println("Model: " + model);
    }
}

// Subclass of Two-wheeler
class MyTwoWheeler extends TwoWheeler {
    private String ownerName;

    // Constructor using super keyword
    public MyTwoWheeler(int yearOfManufacture, String ownerName) {
        super(yearOfManufacture);
        this.ownerName = ownerName;
    }

    @Override
    public void putData() {
        super.putData();
        System.out.println("Owner Name: " + ownerName);
    }
}

// Main class to demonstrate functionality
public class InheritanceDemo {
    public static void main(String[] args) {
        // Create a Two-wheeler object
        TwoWheeler bike = new TwoWheeler(2021);
        bike.getData();
        bike.putData();

        System.out.println();

        // Create a Four-wheeler object
        FourWheeler car = new FourWheeler(2018, "SUV");
        car.getData();
        car.putData();

        System.out.println();

        // Create a MyTwoWheeler object
        MyTwoWheeler myBike = new MyTwoWheeler(2023, "John Doe");
        myBike.getData();
        myBike.putData();
    }
}
// Abstract class Vehicle
abstract class Vehicle {
    protected int yearOfManufacture;

    // Constructor
    public Vehicle(int yearOfManufacture) {
        this.yearOfManufacture = yearOfManufacture;
    }

    // Abstract methods
    public abstract void getData();
    public abstract void putData();
}

// Derived class Two-wheeler
class TwoWheeler extends Vehicle {
    protected String type; // Type of two-wheeler (e.g., bike, scooter)

    // Constructor
    public TwoWheeler(int yearOfManufacture) {
        super(yearOfManufacture);
    }

    @Override
    public void getData() {
        System.out.println("Two-wheeler Data Collected");
    }

    @Override
    public void putData() {
        System.out.println("Two-wheeler Details:");
        System.out.println("Year of Manufacture: " + yearOfManufacture);
    }
}

// Final class Four-wheeler
final class FourWheeler extends Vehicle {
    private String model;

    // Constructor
    public FourWheeler(int yearOfManufacture, String model) {
        super(yearOfManufacture);
        this.model = model;
    }

    @Override
    public void getData() {
        System.out.println("Four-wheeler Data Collected");
    }

    @Override
    public void putData() {
        System.out.println("Four-wheeler Details:");
        System.out.println("Year of Manufacture: " + yearOfManufacture);
        System.out.println("Model: " + model);
    }
}

// Subclass of Two-wheeler
class MyTwoWheeler extends TwoWheeler {
    private String ownerName;

    // Constructor using super keyword
    public MyTwoWheeler(int yearOfManufacture, String ownerName) {
        super(yearOfManufacture);
        this.ownerName = ownerName;
    }

    @Override
    public void putData() {
        super.putData();
        System.out.println("Owner Name: " + ownerName);
    }
}

// Main class to demonstrate functionality
public class InheritanceDemo {
    public static void main(String[] args) {
        // Create a Two-wheeler object
        TwoWheeler bike = new TwoWheeler(2021);
        bike.getData();
        bike.putData();

        System.out.println();

        // Create a Four-wheeler object
        FourWheeler car = new FourWheeler(2018, "SUV");
        car.getData();
        car.putData();

        System.out.println();

        // Create a MyTwoWheeler object
        MyTwoWheeler myBike = new MyTwoWheeler(2023, "John Doe");
        myBike.getData();
        myBike.putData();
    }
}

