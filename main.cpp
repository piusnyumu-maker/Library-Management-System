#include <iostream>
#include "Book.h"
#include "Library.h"
#include "User.h"
using namespace std;

int main() {
    Library lib;

    // Add a book to the library
    Book b1("C++ Basics", "Bjarne Stroustrup", "12345");
    lib.addBook(b1);

    // Create a user
    User u1("U001", "Harrison");

    // Search for the book
    Book* found = lib.searchBook("C++ Basics");
    if(found) {
        // Positive test: borrow and return
        u1.borrowBook(found);
        u1.returnBook(found);
    } else {
        cout << "Book not found!" << endl;
