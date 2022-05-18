
#include<iostream>
#include "Cart.h"
#include"FeedBack.h"
#include"Order.h"
#include"Report.h"
#include"Inquiry.h"


// customer.h
class Customer
{
private :
    int customerId;
    char username[50];
    char password[10];

    Cart* crt[2];
    FeedBack* bFeed[2];
    Order* Ord[2];
    Report* Rpt[2];
    Inquiry* inquiry[2];

   

public:

    Customer();
    Customer(int cart1, int cart2, int feed1, int feed2, int ord1, int ord2, int rep1, int rep2 ,int inq1 , int inq2);
    void loginDetails(int cID , const char cName , char const cPassword[]);
    void displayCustomerDetails();
    void editCustomerDetails();
    void deleteCustomer();
    void setNewPassword();
    ~Customer();

};
