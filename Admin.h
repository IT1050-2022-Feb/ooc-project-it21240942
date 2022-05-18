/*----IT21240706-----*/
//Admin.h
#include <iostream>
#include <cstring>
#include "Report.h"
#include "Book.h"
#include "Customer.h"
#include "Publisher.h"
#include "Inquiry.h"
#include "Order.h"
class Admin
{
private:
    int adminID;
    char aUsername[50];
    char aEmail[30];
    int aPhoneNo;
    Report * rep;
    Book* bk;
    Customer * cust;
    Publisher *pub;
    Inquiry* inq;
    Order * odr;

public:
    Admin();
    void adminDetails(int aID, const char aName[], const char email[], int number);
    void approveBooks();
    void viewInquiry();
    void removeExistingBooks();
    void displayAdminDetails();
    void deleteUserAccount();
    void displayApproveBook();
    ~Admin();
};
