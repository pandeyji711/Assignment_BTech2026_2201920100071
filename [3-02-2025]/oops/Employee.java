class Employee {
    private int id;
    private String name;
    private double salary;

    // Constructor
    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    // Increase salary method
    public void increaseSalary(double percentage) {
        if (percentage > 0) {
            salary += (salary * percentage / 100);
            System.out.println("Salary increased by " + percentage + "%.");
        } else {
            System.out.println("Invalid percentage value!");
        }
    }

    // Display employee info
    public void displayInfo() {
        System.out.println("Employee ID: " + id);
        System.out.println("Employee Name: " + name);
        System.out.println("Salary: $" + salary);
    }

    public static void main(String[] args) {
        Employee emp = new Employee(101, "Anurag Pandey", 50000);
        emp.displayInfo();
        emp.increaseSalary(10);
        emp.displayInfo();
    }
}
