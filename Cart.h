//IT21239298
#include<iostream>
#include"Book.h"
//Cart.h
class Cart
{
private:

    int cartID;
    int quantity;

    Book* books[2];

public:

    Cart();
    void removeBook();
    void addBook(int cID, int qunty, Book* books1, Book* books2);
    void displayCartDetails();
    ~Cart();

};
