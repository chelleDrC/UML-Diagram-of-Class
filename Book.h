#include <iostream>

using namespace std;

class Book{
    private:
        string Title;
        string Author;
        string ISBN;
        string Publisher;

    public:
        //Assuming that the given instruction is correct that there is no publisher in the parameter
        Book(string title, string author, string isbn){
            Title = title;
            Author = author;
            ISBN = isbn;
        }

        string setTitle(string bktitle){
            Title = bktitle;
            return Title;
        }

        string setAuthor(string bkauthor){
            Author = bkauthor;
            return Author;
        }

        string setISBN(string bkisbn){
            ISBN = bkisbn;
            return ISBN;
        }

        string setPublisher(string bkpub){
            Publisher = bkpub;
            return Publisher;
        }

        string getTitle(){
            return Title;
        }

        string getAuthor(){
            return Author;
        }

        string getISBN(){
            return ISBN;
        }

        string getPublisher(){
            return Publisher;
        }
};

