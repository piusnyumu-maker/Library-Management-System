#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include <algorithm>
#include "Book.h"
using namespace std;

class User {
private:
    string userID, name;
    vector<Book*> borrowedBooks;
public:
    User(string id, string n) : userID(id), name(n) {}
    void borrowBook(Book* b) {
        if(b->isAvailable()) {
            borrowedBooks.push_back(b);
            b->setAvailability(false);
        } else {
            cout << "Book not available!" << endl;
        }
    }
    void returnBook(Book* b) {
        b->setAvailability(true);
        borrowedBooks.erase(remove(borrowedBooks.begin(), borrowedBooks.end(), b), borrowedBooks.end());
    }
};

#endif
