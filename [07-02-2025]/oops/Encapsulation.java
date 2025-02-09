// Encapsulated class with private fields
class BankAccount {
    private String ownerName;
    private String accountNumber;
    private double balance;

    // Constructor
    public BankAccount(String ownerName, String accountNumber, double initialBalance) {
        this.ownerName = ownerName;
        this.accountNumber = accountNumber;
        this.balance = initialBalance;
    }

    // Getter methods (Encapsulation)
    public String getOwnerName() {
        return ownerName;
    }

    public double getBalance() {
        return balance;
    }

    // Deposit method
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount + ", New Balance: " + balance);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }

    // Withdraw method with validation
    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount + ", New Balance: " + balance);
        } else {
            System.out.println("Insufficient balance or invalid amount.");
        }
    }
}

// Driver class
public class EncapsulationDemo {
    public static void main(String[] args) {
        BankAccount myAccount = new BankAccount("Anurag Pandey", "123456789", 5000);

        System.out.println("Account Owner: " + myAccount.getOwnerName());
        System.out.println("Initial Balance: " + myAccount.getBalance());

        myAccount.deposit(1500);  // Deposit money
        myAccount.withdraw(2000); // Withdraw money
        myAccount.withdraw(5000); // Insufficient balance scenario
    }
}
