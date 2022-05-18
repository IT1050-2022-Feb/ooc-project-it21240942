//IT21239298
#include<iostream>
#include"Report.h"
#include"FeedBack.h"
#include"Order.h"
#include"Publisher.h"
//Book.h
class Book
{
private:
    int bookID;
    char bookName;
    double bookPrice;

    Report* bReport[2];
    FeedBack* bFeed[2];
    Order* bOrder[2];
    Publisher* bPublisher[2];

    

public:

    Book();
    Book(int bID, const char bName, double bPrice, int bRpt1, int bRpt2, int feed1, int feed2, int order1, int order2, int bPub1, int bPub2);
    void  displayBookDetails();
    void addBookDetaiks();
    void updateBook();
    void deleteBook();
    void changeStatus();
    ~Book();


};
