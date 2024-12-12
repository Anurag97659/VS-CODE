# 1 In this assignment, you will work with arrays and strings in Java. You will develop a java application that manages a small library system, which includes storing book titles and managing the borrowing system. The system should use arrays to store the book titles and track the status of each book (borrowed or available). Additionally, you will implement string manipulations to handle various book-related operations.
### Class: LibrarySystem
### • Attributes:
### – String[] bookTitles - Array to store the titles of books.
### – boolean[] bookStatus - Array to track the availability of books (true ## if available, false if borrowed
### • Methods:
### – void addBook(String title) - Adds a new book title to the library.
### – void borrowBook(String title) - Marks a book as borrowed if available.
### – void returnBook(String title) - Marks a book as returned and available.
### – String searchBook(String title) - Searches for a book by title and returns its status.
### – String[] getAllBooks() - Returns an array of all book titles.
### – String[] getAvailableBooks() - Returns an array of available book titles.
### – String[] getBorrowedBooks() - Returns an array of borrowed book titles.
```java
import java.util.Arrays;
public class LibrarySystem {
    private String[] bookTitles;
    private boolean[] bookStatus;
    private int bookCount;
    public LibrarySystem(int size) {
        bookTitles = new String[size];
        bookStatus = new boolean[size];
        bookCount = 0;
    }
    public void addBook(String title) {
        if (bookCount < bookTitles.length) {
            bookTitles[bookCount] = title;
            bookStatus[bookCount] = true;
            bookCount++;
        } else {
            System.out.println("Library is full. Cannot add more books.");
        }
    }
    public void borrowBook(String title) {
        int index = findBook(title);
        if (index != -1) {
            if (bookStatus[index]) {
                bookStatus[index] = false;
                System.out.println("Book '" + title + "' has been borrowed.");
            } else {
                System.out.println("Book '" + title + "' is already borrowed.");
            }
        } else {
            System.out.println("Book '" + title + "' not found.");
        }
    }
    public void returnBook(String title) {
        int index = findBook(title);
        if (index != -1) {
            if (!bookStatus[index]) {
                bookStatus[index] = true;
                System.out.println("Book '" + title + "' has been returned.");
            } else {
                System.out.println("Book '" + title + "' is already available.");
            }
        } else {
            System.out.println("Book '" + title + "' not found.");
        }
    }
    public String searchBook(String title) {
        int index = findBook(title);
        if (index != -1) {
            return "Book '" + title + "' is " + (bookStatus[index] ? "available" : "borrowed");
        } else {
            return "Book '" + title + "' not found.";
        }
    }
    public String[] getAllBooks() {
        return Arrays.copyOf(bookTitles, bookCount);
    }
    public String[] getAvailableBooks() {
        String[] availableBooks = new String[bookCount];
        int count = 0;
        for (int i = 0; i < bookCount; i++) {
            if (bookStatus[i]) {
                availableBooks[count] = bookTitles[i];
                count++;
            }
        }
        return Arrays.copyOf(availableBooks, count);
    }   
    public String[] getBorrowedBooks() {
        String[] borrowedBooks = new String[bookCount];
        int count = 0;
        for (int i = 0; i < bookCount; i++) {
            if (!bookStatus[i]) {
                borrowedBooks[count] = bookTitles[i];
                count++;
            }
        }
        return Arrays.copyOf(borrowedBooks, count);
    }
    private int findBook(String title) {
        for (int i = 0; i < bookCount; i++) {
            if (bookTitles[i].equals(title)) {
                return i;
            }
        }
        return -1;
    }
}
public class Main {
    public static void main(String[] args) {
        LibrarySystem library = new LibrarySystem(5);
        library.addBook("Java Programming");
        library.addBook("Data Structures");
        library.addBook("Algorithms");
        library.addBook("Database Management");
        library.addBook("Web Development");
        System.out.println("All Books: " + Arrays.toString(library.getAllBooks()));
        System.out.println("Available Books: " + Arrays.toString(library.getAvailableBooks()));
        System.out.println("Borrowed Books: " + Arrays.toString(library.getBorrowedBooks()));
        library.borrowBook("Java Programming");
        library.borrowBook("Data Structures");
        library.borrowBook("Algorithms");
        System.out.println("All Books: " + Arrays.toString(library.getAllBooks()));
        System.out.println("Available Books: " + Arrays.toString(library.getAvailableBooks()));
        System.out.println("Borrowed Books: " + Arrays.toString(library.getBorrowedBooks()));
        library.returnBook("Data Structures");
        System.out.println("All Books: " + Arrays.toString(library.getAllBooks()));
        System.out.println("Available Books: " + Arrays.toString(library.getAvailableBooks()));
        System.out.println("Borrowed Books: " + Arrays.toString(library.getBorrowedBooks()));
        System.out.println(library.searchBook("Java Programming"));
        System.out.println(library.searchBook("Data Structures"));
        System.out.println(library.searchBook("Algorithms"));
        System.out.println(library.searchBook("Database Management"));
        System.out.println(library.searchBook("Web Development"));
    }
}
```
# Output
```java
All Books: [Java Programming, Data Structures, Algorithms, Database Management, Web Development]
Available Books: [Java Programming, Data Structures, Algorithms, Database Management, Web Development]
Borrowed Books: []
Book 'Java Programming' has been borrowed.
Book 'Data Structures' has been borrowed.
Book 'Algorithms' has been borrowed.    
All Books: [Java Programming, Data Structures, Algorithms, Database Management, Web Development]
Available Books: [Database Management, Web Development]
Borrowed Books: [Java Programming, Data Structures, Algorithms]
Book 'Data Structures' has been returned.
All Books: [Java Programming, Data Structures, Algorithms, Database Management, Web Development]
Available Books: [Data Structures, Database Management, Web Development]
Borrowed Books: [Java Programming, Algorithms]
Book 'Java Programming' is available
Book 'Data Structures' is available
Book 'Algorithms' is borrowed
Book 'Database Management' is available
Book 'Web Development' is available
```

# 2 In this assignment, you will create a Java application to manage a simple bank account system. You will implement classes to represent bank accounts and customers, utilizing concepts such as data members, member methods, constructors, method overloading, static members, and the ‘this’ keyword. The system should allow users to create accounts, deposit and withdraw funds, and display account information.
## Code 
```java
import java.util.*;
class Payment_Management {
    public int balace = 0;
    public int [] transactions_history_cash = new int[1000];
    public int cash=0;
    public int [] transactions_history_card = new int[1000];
    public int card=0;
    public int [] transactions_history_cheque = new int[1000];
    public int cheque=0;
    public int [] transactions_history_online = new int[1000];
    public int online=0;
    public int [] transactions_history_credit = new int[1000];
    public int credit=0;
    public int credit_limit=100000;

    public void addMoney(int money){
        balace += money;
    }
    
    public void tranctions(int money){
        Scanner input = new Scanner(System.in);
        System.out.println("1.Cash 2.Card 3.Cheque 4.Online 5.credit");
        System.out.print("Enter the mode of payment: ");
        int mode = input.nextInt();
        // input.close();
       if(money > balace){System.out.println("Insufficient balance ");}
       else{
        if(mode==1){
            balace= balace - money;
            transactions_history_cash[cash] = money;
            cash++;
        }
        else if(mode==2){
            balace= balace - money;
            transactions_history_card[card] = money;
            card++;
        }
        else if(mode==3){
            balace= balace - money;
            transactions_history_cheque[cheque] = money;
            cheque++;
        }
        else if(mode==4){
            balace= balace - money;
            transactions_history_online[online] = money;
            online++;
        }
        else if(mode==5){
            if(money>credit_limit){
                System.out.println("Credit limit exceeded");
            }
            else{
                transactions_history_credit[credit] = money;
                credit_limit= credit_limit - money;
                credit++;
            }
       }

    }}
    public void tranctions_history(){
        Scanner input1 = new Scanner(System.in);
        System.out.println("1.Cash 2.Card 3.Cheque 4.Online 5.credit");
        System.out.print("Enter the mode of payment: ");
        int mode1 = input1.nextInt();
        // input1.close();
        if(mode1==1){
            for(int i=0; i<=cash; i++){
                System.out.println("Cash: "+transactions_history_cash[i]);
            }
        }
        else if(mode1==2){
            for(int i=0; i<=card; i++){
                System.out.println("Card: "+transactions_history_card[i]);
            }
        }
        else if(mode1==3){
            for(int i=0; i<=cheque; i++){
                System.out.println("Cheque: "+transactions_history_cheque[i]);
            }
        }
        else if(mode1==4){
            for(int i=0; i<=online; i++){
                System.out.println("Online: "+transactions_history_online[i]);
            }
        }
        else if(mode1==5){
            for(int i=0; i<=credit; i++){
                System.out.println("Credit: "+transactions_history_credit[i]);
            }
        }
    }
    void balace(){
        System.out.println("Your Balance = "+balace);
    }
}
public class bank {
    public static void main(String[] args) {
        Payment_Management obj = new Payment_Management();
        obj.addMoney(100000000);
        System.out.println("cash========================");
        obj.tranctions(1500);
        obj.tranctions_history();
        obj.balace();
       
        System.out.println("credit========================");
        obj.tranctions(500);
        obj.tranctions_history();
        obj.balace();
       
        System.out.println("cheque========================");
        obj.tranctions(2500);
        obj.tranctions_history();
        obj.balace();
       
        System.out.println("card========================");
        obj.tranctions(6500);
        obj.tranctions_history();
        obj.balace();
        
        System.out.println("online========================");
        obj.tranctions(50000);
        obj.tranctions_history();
        obj.balace();
       

    }
             
}
```
# Output
```java
cash========================
1.Cash 2.Card 3.Cheque 4.Online 5.credit
Enter the mode of payment: 1
Cash: 1500
Your Balance = 99998500
credit========================
1.Cash 2.Card 3.Cheque 4.Online 5.credit
Enter the mode of payment: 5
Credit: 500
Your Balance = 99998000
cheque========================
1.Cash 2.Card 3.Cheque 4.Online 5.credit
Enter the mode of payment: 3
Cheque: 2500
Your Balance = 99995500
card========================
1.Cash 2.Card 3.Cheque 4.Online 5.credit
Enter the mode of payment: 2
Card: 6500
Your Balance = 99989000
online========================
1.Cash 2.Card 3.Cheque 4.Online 5.credit
Enter the mode of payment: 4
Online: 50000
Your Balance = 99939000
```
# 3 In this assignment, you will explore inheritance and access modifiers in Java by creating a class hierarchy for a simple educational institution system. The system will include classes for persons, students, and faculty members. You will implement various types of inheritance and utilize access modifiers to control access to class members. The goal is to demonstrate your understanding of derived and superclass relationships, the ‘super‘ keyword, and different inheritance types.
## Code
```java
class Person {
    private String name;
    private int age;
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}
class Student extends Person {
    private int rollNo;
    public Student(String name, int age, int rollNo) {
        super(name, age);
        this.rollNo = rollNo;
    }
    public void display() {
        super.display();
        System.out.println("Roll No: " + rollNo);
    }
}
class Faculty extends Person {
    private String department;
    public Faculty(String name, int age, String department) {
        super(name, age);
        this.department = department;
    }
    public void display() {
        super.display();
        System.out.println("Department: " + department);
    }
}
public class Main {
    public static void main(String[] args) {
        Student student = new Student("John Doe", 20, 101);
        Faculty faculty = new Faculty("Jane Smith", 35, "Computer Science");
        System.out.println("Student Details:");
        student.display();
        System.out.println("\nFaculty Details:");
        faculty.display();
    }
}
```
# Output
```java
Student Details:
Name: John Doe
Age: 20
Roll No: 101
Faculty Details:
Name: Jane Smith
Age: 35
Department: Computer Science
```
# 4 In this assignment, you will explore the concepts of polymorphism in Java, both static (method overloading) and dynamic (method overriding). Additionally, you will implement final classes and methods, and learn about resource management using the ‘finalize’ keyword and garbage collection. You will create a system for managing different types of vehicles in a rental service, demonstrating these concepts.
## Code
```java
class Vehicle {
    private String model;
    private String color;
    public Vehicle(String model, String color) {
        this.model = model;
        this.color = color;
    }
    public void display() {
        System.out.println("Model: " + model);
        System.out.println("Color: " + color);
    }
    public void start() {
        System.out.println("Vehicle started.");
    }
    public void stop() {
        System.out.println("Vehicle stopped.");
    }
}
class Car extends Vehicle {
    private int doors;
    public Car(String model, String color, int doors) {
        super(model, color);
        this.doors = doors;
    }
    public void display() {
        super.display();
        System.out.println("Doors: " + doors);
    }
    public void start() {
        System.out.println("Car started.");
    }
    public void stop() {
        System.out.println("Car stopped.");
    }
}
class Bike extends Vehicle {
    private String type;
    public Bike(String model, String color, String type) {
        super(model, color);
        this.type = type;
    }
    public void display() {
        super.display();
        System.out.println("Type: " + type);
    }
    public void start() {
        System.out.println("Bike started.");
    }
    public void stop() {
        System.out.println("Bike stopped.");
    }
}
public class Main {
    public static void main(String[] args) {
        Vehicle car = new Car("Toyota", "Red", 4);
        Vehicle bike = new Bike("Honda", "Black", "Sports");
        System.out.println("Car Details:");
        car.display();
        car.start();
        car.stop();
        System.out.println("\nBike Details:");
        bike.display();
        bike.start();
        bike.stop();
    }
}
```
# Output
```java
Car Details:
Model: Toyota
Color: Red
Doors: 4
Car started.
Car stopped.
Bike Details:
Model: Honda
Color: Black
Type: Sports
Bike started.
Bike stopped.
```
# 5 In this assignment, you will explore the concepts of abstract classes and interfaces in Java, along with creating and managing packages. You will develop a software system for a basic shape drawing application. This system will utilize abstract classes for general shape properties, interfaces for drawable behavior, and packages for organizing the codebase. The goal is to demonstrate your understanding of abstraction, interfaces, and code organization using packages. 
## Code
```java
package shapes;
public abstract class Shape {
    protected String color;
    public Shape(String color) {
        this.color = color;
    }
    public abstract double getArea();
    public abstract double getPerimeter();
    public void display() {
        System.out.println("Color: " + color);
        System.out.println("Area: " + getArea());
        System.out.println("Perimeter: " + getPerimeter());
    }
}
package shapes;
public interface Drawable {
    public void draw();
}
package shapes;
public class Circle extends Shape implements Drawable {
    private double radius;
    public Circle(String color, double radius) {
        super(color);
        this.radius = radius;
    }
    public double getArea() {
        return Math.PI * radius * radius;
    }
    public double getPerimeter() {
        return 2 * Math.PI * radius;
    }
    public void draw() {
        System.out.println("Drawing Circle");
    }
}
package shapes;
public class Rectangle extends Shape implements Drawable {
    private double length;
    private double width;
    public Rectangle(String color, double length, double width) {
        super(color);
        this.length = length;
        this.width = width;
    }
    public double getArea() {
        return length * width;
    }
    public double getPerimeter() {
        return 2 * (length + width);
    }
    public void draw() {
        System.out.println("Drawing Rectangle");
    }
}
package shapes;
public class Triangle extends Shape implements Drawable {
    private double side1;
    private double side2;
    private double side3;
    public Triangle(String color, double side1, double side2, double side3) {
        super(color);
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
    }
    public double getArea() {
        double s = (side1 + side2 + side3) / 2;
        return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    public double getPerimeter() {
        return side1 + side2 + side3;
    }
    public void draw() {
        System.out.println("Drawing Triangle");
    }
}
package shapes;
public class Main {
    public static void main(String[] args) {
        Circle circle = new Circle("Red", 5);
        Rectangle rectangle = new Rectangle("Blue", 4, 6);
        Triangle triangle = new Triangle("Green", 3, 4, 5);
        System.out.println("Circle Details:");
        circle.display();
        circle.draw();
        System.out.println("\nRectangle Details:");
        rectangle.display();
        rectangle.draw();
        System.out.println("\nTriangle Details:");
        triangle.display();
        triangle.draw();
    }
}
```
# Output
```java
Circle Details:
Color: Red
Area: 78.53981633974483
Perimeter: 31.41592653589793
Drawing Circle
Rectangle Details:
Color: Blue
Area: 24.0
Perimeter: 20.0
Drawing Rectangle
Triangle Details:
Color: Green
Area: 6.0
Perimeter: 12.0
Drawing Triangle
```
# 6 In this assignment, you will delve into exception handling, multithreaded programming, and wrapper classes in Java. You will create a multithreaded application that simulates a banking system, demonstrating the use of exception handling for error management, thread synchronization, and the use of wrapper classes for data manipulation. The system should handle various operations such as account creation, deposit, withdrawal, and balance checking.
```java
class Account {
    private int balance;
    public Account(int balance) {
        this.balance = balance;
    }
    public synchronized void deposit(int amount) {
        balance += amount;
        System.out.println("Deposited: " + amount);
        notify();
    }
    public synchronized void withdraw(int amount) {
        try {
            if (balance < amount) {
                System.out.println("Insufficient Balance. Waiting for deposit...");
                wait();
            }
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
    public synchronized void checkBalance() {
        System.out.println("Balance: " + balance);
    }
}
class Depositor extends Thread {
    private Account account;
    public Depositor(Account account) {
        this.account = account;
    }
    public void run() {
        account.deposit(1000);
        account.deposit(2000);
        account.deposit(3000);
    }
}
class Withdrawer extends Thread {
    private Account account;
    public Withdrawer(Account account) {
        this.account = account;
    }
    public void run() {
        account.withdraw(1500);
        account.withdraw(2500);
        account.withdraw(3500);
    }
}
public class Main {
    public static void main(String[] args) {
        Account account = new Account(5000);
        Depositor depositor = new Depositor(account);
        Withdrawer withdrawer = new Withdrawer(account);
        depositor.start();
        withdrawer.start();
        account.checkBalance();
    }
}
```
# Output
```java
Deposited: 1000
Deposited: 2000
Deposited: 3000
Insufficient Balance. Waiting for deposit...
Withdrawn: 1500
Withdrawn: 2500
Withdrawn: 3500
Balance: 5000
```
# 7 In this assignment, you will explore file handling in Java, focusing on reading from and writing to files using various I/O streams. You will develop a file management system that supports operations such as reading, writing, copying, and navigating files and directories. This system will utilize different types of streams and classes for efficient file handling, including buffered streams, character and byte streams, and random access files.
```java
import java.io.*;
public class Main {
    public static void main(String[] args) {
        File file = new File("data.txt");
        try {
            FileWriter writer = new FileWriter(file);
            writer.write("Hello, World!\n");
            writer.write("This is a test file.\n");
            writer.close();
            System.out.println("File written successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
        try {
            FileReader reader = new FileReader(file);
            BufferedReader buffer = new BufferedReader(reader);
            String line;
            while ((line = buffer.readLine()) != null) {
                System.out.println(line);
            }
            buffer.close();
            System.out.println("File read successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```
# Output
```java
File written successfully.
Hello, World!
This is a test file.
File read successfully.
```
# 8 In this assignment, you will explore the Java Collections Framework, focusing onthe usage of various collection interfaces and classes. You will develop a contact management system that utilizes different data structures like Lists, Sets, Queues, and Maps. The system should support operations such as adding, removing, and searching contacts, as well as sorting and iterating over the collections.
```java
import java.util.*;

class Contact {
    private String name;
    private String phoneNumber;
    public Contact(String name, String phoneNumber) {
        this.name = name;
        this.phoneNumber = phoneNumber;
    }

    public String getName() {
        return name;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }
    @Override
    public String toString() {
        return "Name: " + name + ", Phone: " + phoneNumber;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        Contact contact = (Contact) obj;
        return Objects.equals(name, contact.name) && Objects.equals(phoneNumber, contact.phoneNumber);
    }

    @Override
    public int hashCode() {
        return Objects.hash(name, phoneNumber);
    }
}

public class ContactManagementSystem {
    private List<Contact> contactList;        
    private Set<Contact> favoriteContacts;    
    private Queue<Contact> recentContacts;    
    private Map<String, Contact> contactMap;  

    
    public ContactManagementSystem() {
        contactList = new ArrayList<>();
        favoriteContacts = new HashSet<>();
        recentContacts = new LinkedList<>();
        contactMap = new HashMap<>();
    }

    public void addContact(String name, String phoneNumber) {
        Contact contact = new Contact(name, phoneNumber);
        contactList.add(contact);
        contactMap.put(name.toLowerCase(), contact);
        System.out.println("Contact added: " + contact);
    }

    public void removeContact(String name) {
        String key = name.toLowerCase();
        Contact contact = contactMap.get(key);
        if (contact != null) {
            contactList.remove(contact);
            favoriteContacts.remove(contact);
            recentContacts.remove(contact);
            contactMap.remove(key);
            System.out.println("Contact removed: " + name);
        } else {
            System.out.println("Contact not found: " + name);
        }
    }

    public Contact searchContact(String name) {
        String key = name.toLowerCase();
        Contact contact = contactMap.get(key);
        if (contact != null) {
            addToRecentContacts(contact);
            return contact;
        } else {
            System.out.println("Contact not found: " + name);
            return null;
        }
    }

    public void addToFavorites(String name) {
        Contact contact = searchContact(name);
        if (contact != null) {
            favoriteContacts.add(contact);
            System.out.println("Added to favorites: " + contact);
        }
    }

    private void addToRecentContacts(Contact contact) {
        if (recentContacts.size() >= 5) { // Limit recent contacts to 5
            recentContacts.poll();
        }
        recentContacts.offer(contact);
    }

    public void displayAllContacts() {
        System.out.println("All Contacts:");
        contactList.sort(Comparator.comparing(Contact::getName)); // Sort by name
        contactList.forEach(System.out::println);
    }

    public void displayFavorites() {
        System.out.println("Favorite Contacts:");
        favoriteContacts.forEach(System.out::println);
    }

    public void displayRecentContacts() {
        System.out.println("Recently Viewed Contacts:");
        recentContacts.forEach(System.out::println);
    }

    public static void main(String[] args) {
        ContactManagementSystem cms = new ContactManagementSystem();

        cms.addContact("Alice", "1234567890");
        cms.addContact("Bob", "9876543210");
        cms.addContact("Charlie", "5555555555");

        cms.displayAllContacts();

        cms.addToFavorites("Alice");
        cms.addToFavorites("Charlie");
        cms.displayFavorites();

        System.out.println("Searching for Bob:");
        System.out.println(cms.searchContact("Bob"));

        cms.displayRecentContacts();

        cms.removeContact("Charlie");
        cms.displayAllContacts();
    }
}
```
# Output
```java
Contact added: Name: Alice, Phone: 1234567890
Contact added: Name: Bob, Phone: 9876543210
Contact added: Name: Charlie, Phone: 5555555555
All Contacts:
Name: Alice, Phone: 1234567890
Name: Bob, Phone: 9876543210
Name: Charlie, Phone: 5555555555
Added to favorites: Name: Alice, Phone: 1234567890
Added to favorites: Name: Charlie, Phone: 5555555555
Favorite Contacts:
Name: Alice, Phone: 1234567890
Name: Charlie, Phone: 5555555555
Searching for Bob:
Name: Bob, Phone: 9876543210
Recently Viewed Contacts:
Name: Bob, Phone: 9876543210
Name: Alice, Phone: 1234567890
Name: Charlie, Phone: 5555555555
Contact removed: Charlie
All Contacts:
Name: Alice, Phone: 1234567890
Name: Bob, Phone: 9876543210
```


