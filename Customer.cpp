//IT21240942
#include<iostream>
#include"Customer.h"

//customer implementation 
   Customer::Customer()
    {
       crt[0] = new Cart[001];
       crt[1] = new Cart[002];

       bFeed[0] = new FeedBack[111];
       bFeed[1] = new FeedBack[222];

       Ord[0] = new Order[011];
       Ord[1] = new Order[022];

       Rpt[0] = new Report[010];
       Rpt[1] = new Report[020];

       inquiry[0] = new Inquiry[100];
       inquiry[1] = new Inquiry[101];
       
    }
   Customer::Customer(int cart1, int cart2, int feed1, int feed2, int ord1, int ord2, int rep1, int rep2, int inq1, int inq2)
   {
       crt[0] = new Cart[cart1];
       crt[1] = new Cart[cart2];

       bFeed[0] = new FeedBack[feed1];
       bFeed[1] = new FeedBack[feed2];

       Ord[0] = new Order[ord1];
       Ord[1] = new Order[ord2];

       Rpt[0] = new Report[rep1];
       Rpt[1] = new Report[rep2];

       inquiry[0] = new Inquiry[inq1];
       inquiry[1] = new Inquiry[inq2];
   }
     void  Customer :: loginDetails(int cID, const char cName, char const cPassword[])
    {

    }
     void Customer::displayCustomerDetails()
     {

     }
     void Customer::editCustomerDetails()
     {

     }
     void Customer::deleteCustomer()
     {

     }
     void Customer::setNewPassword()
     {

     }
    Customer ::  ~Customer()
     {
         cout << "Deleting customer id" << endl;
         {
             delete crt[0];
             delete crt[1];

             delete bFeed[0];
             delete bFeed[1];

             delete Ord[0];
             delete Ord[1];

             delete Rpt[0];
             delete Rpt[1];

             cout << "the end " << endl;

         }
     }
