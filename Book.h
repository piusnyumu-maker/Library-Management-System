#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title, author, ISBN;
    bool available;
public:
    Book(string t, string a, string i) : title(t), author(a), ISBN(i), available(true) {}
    string getTitle() { return title; }
    string getAuthor() { return author; }
    string getISBN() { return ISBN; }
    bool isAvailable() { return available; }
    void setAvailability(bool status) { available = status; }
};

#endif
