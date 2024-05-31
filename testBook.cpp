#include <iostream>
#include <string>
#include  "Book.h"

using namespace std;
//Function Prototypes
void displayBook(Book b1);

//Main function
int main (){
    //Variable delcarations
    string title, author, isbn, publisher;

    //Get user inputs
    cout << "Enter Title: ";
    getline(cin, title);  //Inorder to allow titles with spaces
    cout << "Enter Author: ";
    getline(cin, author);
    cout << "Enter ISBN: ";
    getline(cin, isbn);
    cout << "Enter Publisher: ";
    getline(cin, publisher);

    // Using constructor parameters to set values
    Book book(title, author, isbn); //Assuming that the given instruction is correct
    publisher = book.setPublisher(publisher);

    //Print the book details
    cout << endl << "Using Constructor method" << endl;
    displayBook(book);
    
    // Using Setter method
    title = book.setTitle("The Alchemist");
    author = book.setAuthor("Paulo Coelho");
    isbn = book.setISBN("978-0062315007");
    publisher = book.setPublisher("HarperOne");

    //Print the book details
    cout << endl << "Using Setter method" << endl;
    displayBook(book);
    return 0;
}

//Function definitions
void displayBook(Book b1){
    cout << "Title: " << b1.getTitle() << endl;
    cout << "Author: " << b1.getAuthor() << endl;
    cout << "ISBN: " << b1.getISBN() << endl;
    cout << "Publisher: " << b1.getPublisher() << endl;
}