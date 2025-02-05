abstract class Book {
    protected String title;
    protected String author;
    protected double price;

    public Book(String title, String author, double price) {
        this.title = title;
        this.author = author;
        this.price = price;
    }

    public abstract void displayInfo();
}

class EBook extends Book {
    private double fileSize; // In MB

    public EBook(String title, String author, double price, double fileSize) {
        super(title, author, price);
        this.fileSize = fileSize;
    }

    @Override
    public void displayInfo() {
        System.out.println("E-Book: " + title + " by " + author + ", Price: $" + price + ", File Size: " + fileSize + "MB");
    }
}

class PrintedBook extends Book {
    private int pageCount;

    public PrintedBook(String title, String author, double price, int pageCount) {
        super(title, author, price);
        this.pageCount = pageCount;
    }

    @Override
    public void displayInfo() {
        System.out.println("Printed Book: " + title + " by " + author + ", Price: $" + price + ", Pages: " + pageCount);
    }
}

public class Main {
    public static void main(String[] args) {
        Book ebook = new EBook("Java Basics", "John Doe", 10.99, 5.2);
        Book printedBook = new PrintedBook("Advanced Java", "Jane Smith", 29.99, 350);

        ebook.displayInfo();
        printedBook.displayInfo();
    }
}
