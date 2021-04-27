#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};
int main(){
    Book book1;
    book1.title = "New Book";
    book1.author = "Adam Birgenheier";
    book1.pages = 369;
    cout << book1.title << "is written by " << book1.author << " and contains " << book1.pages << " pages. \n";

    Book book2;
    book2.title = "Old Book";
    book2.author = "Johny Fubar";
    book2.pages = 429;
    cout << book2.title << " is written by " << book2.author << " and contains " << book2.pages << " pages.";
    return 0;
}