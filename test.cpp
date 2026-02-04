#include <iostream>
#include "Book.h"
#include "Library.h"
#include "User.h"
using namespace std;

int main() {
    Library lib;
    Book b1("C++ Basics", "Bjarne Stroustrup", "12345");
    Book b2("Data Structures", "Mark Weiss", "67890");
    lib.addBook(b1);
    lib.addBook(b2);

    User u1("U001", "Harrison");

    // Positive test: search for an existing book
    Book* found = lib.searchBook("C++ Basics");
    if(found) cout << "PASS: Book found\n";
    else cout << "FAIL: Book not found\n";

    // Positive test: borrow available book
    u1.borrowBook(found);

    // Negative test: try borrowing the same book again
    u1.borrowBook(found); // should show "Book not available!"

    // Positive test: return the book
    u1.returnBook(found);

    // Negative test: search for a non-existent book
    Book* notFound = lib.searchBook("Nonexistent Book");
    if(notFound == nullptr) cout << "PASS: Nonexistent book not found\n";
    else cout << "FAIL: Unexpected book found\n";

    return 0;
}
