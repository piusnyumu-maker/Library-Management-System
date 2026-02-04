#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
using namespace std;

class Library {
private:
    vector<Book> books;
public:
    void addBook(Book b) { books.push_back(b); }
    Book* searchBook(string title) {
        for(auto &b : books) {
            if(b.getTitle() == title) return &b;
        }
        return nullptr;
    }
};

#endif
