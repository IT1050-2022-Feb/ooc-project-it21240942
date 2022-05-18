//IT21239298
#include<iostream>
#include<cstring>
#include"Cart.h"
using namespace std;
// cart implementation

    Cart::Cart()
    {

    }
    void Cart::addBook(int cID, int qunty, Book* books1, Book* books2)
    {
        books[0] = books1;
        books[1] = books2;
    }
    void Cart::removeBook()
    {

    }
    void Cart::displayCartDetails()
    {
        for (int i = 0; i < 2; i++)
            books[i]->displayBookDetails();

    }
    Cart :: ~Cart()
    {
        cout << "Deleting Cart details" << endl;

    }
