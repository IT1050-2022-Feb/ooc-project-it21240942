//IT21239298
#include<iostream>
#include<cstring>
#include"Book.h"
using namespace std;
//Book implementation
    Book::Book()
    {
        bReport[0] = new Report[123];
        bReport[1] = new Report[456];

        bFeed[0] = new FeedBack[001];
        bFeed[1] = new FeedBack[002];

        bOrder[0] = new Order[0101];
        bOrder[1] = new Order[0202];

        bPublisher[0] = new Publisher[111];
        bPublisher[1] = new Publisher[222];
    }
   
    Book:: Book(int bID, const char bName, double bPrice, int  bRpt1, int bRpt2, int feed1, int feed2, int order1, int order2, int bPub1, int bPub2)
    {
        bReport[0] = new Report[bRpt1];
        bReport[1] = new Report[bRpt2];

        bFeed[0] = new FeedBack[feed1];
        bFeed[1] = new FeedBack[feed2];

        bOrder[0] = new Order[order1];
        bOrder[1] = new Order[order2];

        bPublisher[0] = new Publisher[bPub1];
        bPublisher[1] = new Publisher[bPub2];


     
    }
  
    void Book::addBookDetaiks()
    {
       
    }
    void Book::updateBook()
    {

    }
    void Book::deleteBook()
    {

    }
    void Book::changeStatus()
    {

    }
    void Book::displayBookDetails()
    {
    

    }
    Book :: ~Book()
    {
        cout << "Deleting Book ID " << endl;
        {
            delete bReport[0];
            delete bReport[1];

            delete bFeed[0];
            delete bFeed[1];

            delete bOrder[0];
            delete bOrder[1];

            delete bPublisher[0];
            delete bPublisher[1];

            cout << "The end" << endl;
        }
    }
