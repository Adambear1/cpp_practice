#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string a_title, string a_author, int a_pages){
            title = a_title;
            author = a_author;
            pages = a_pages;
        }
};

int main()
{
    Book newBook("Random", "Me", 5000);
    Book oldBook("sorted", "Else", 2500);
    cout << newBook.title << "\n" << newBook.author << "\n" << newBook.pages << "\n";
    cout << oldBook.title << "\n" << oldBook.author << "\n" << oldBook.pages << "\n";

    return 0;
}