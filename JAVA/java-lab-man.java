import java.util.ArrayList;
 class LibrarySystem {
    private String[] bookTitles;
    private boolean[] bookStatus;
    private int bookCount;

    // Constructor
    public LibrarySystem(int capacity) {
        bookTitles = new String[capacity];
        bookStatus = new boolean[capacity];
        bookCount = 0;
    }

    // Add a new book title to the library
    public void addBook(String title) {
        if (bookCount < bookTitles.length) {
            bookTitles[bookCount] = title;
            bookStatus[bookCount] = true; // Newly added books are available by default
            bookCount++;
        } else {
            System.out.println("Library is full. Cannot add more books.");
        }
    }

    // Borrow a book
    public void borrowBook(String title) {
        for (int i = 0; i < bookCount; i++) {
            if (bookTitles[i].equalsIgnoreCase(title)) {
                if (bookStatus[i]) {
                    bookStatus[i] = false;
                    System.out.println("You have borrowed \"" + title + "\".");
                    return;
                } else {
                    System.out.println("The book \"" + title + "\" is already borrowed.");
                    return;
                }
            }
        }
        System.out.println("The book \"" + title + "\" does not exist in the library.");
    }

    // Return a borrowed book
    public void returnBook(String title) {
        for (int i = 0; i < bookCount; i++) {
            if (bookTitles[i].equalsIgnoreCase(title)) {
                if (!bookStatus[i]) {
                    bookStatus[i] = true;
                    System.out.println("You have returned \"" + title + "\".");
                    return;
                } else {
                    System.out.println("The book \"" + title + "\" was not borrowed.");
                    return;
                }
            }
        }
        System.out.println("The book \"" + title + "\" does not exist in the library.");
    }

    // Search for a book by title
    public String searchBook(String title) {
        for (int i = 0; i < bookCount; i++) {
            if (bookTitles[i].equalsIgnoreCase(title)) {
                return "The book \"" + title + "\" is " + (bookStatus[i] ? "available." : "borrowed.");
            }
        }
        return "The book \"" + title + "\" does not exist in the library.";
    }

    // Get all book titles
    public String[] getAllBooks() {
        String[] allBooks = new String[bookCount];
        System.arraycopy(bookTitles, 0, allBooks, 0, bookCount);
        return allBooks;
    }

    // Get available book titles
    public String[] getAvailableBooks() {
        ArrayList<String> availableBooks = new ArrayList<>();
        for (int i = 0; i < bookCount; i++) {
            if (bookStatus[i]) {
                availableBooks.add(bookTitles[i]);
            }
        }
        return availableBooks.toArray(new String[0]);
    }

    // Get borrowed book titles
    public String[] getBorrowedBooks() {
        ArrayList<String> borrowedBooks = new ArrayList<>();
        for (int i = 0; i < bookCount; i++) {
            if (!bookStatus[i]) {
                borrowedBooks.add(bookTitles[i]);
            }
        }
        return borrowedBooks.toArray(new String[0]);
    }
}

public class java-lab-mab{
    // Main method for testing
    public static void main(String[] args) {
        LibrarySystem library = new LibrarySystem(5);

        library.addBook("The Catcher in the Rye");
        library.addBook("To Kill a Mockingbird");
        library.addBook("1984");

        System.out.println(library.searchBook("1984"));
        library.borrowBook("1984");
        System.out.println(library.searchBook("1984"));
        library.returnBook("1984");
        System.out.println(library.searchBook("1984"));

        System.out.println("All books: ");
        for (String book : library.getAllBooks()) {
            System.out.println(book);
        }

        System.out.println("Available books: ");
        for (String book : library.getAvailableBooks()) {
            System.out.println(book);
        }

        library.borrowBook("The Catcher in the Rye");
        System.out.println("Borrowed books: ");
        for (String book : library.getBorrowedBooks()) {
            System.out.println(book);
        }
    }
}