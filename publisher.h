//IT21238512         W. M. Y. Soysa
#include <cstring>
#include <iostream>
#include "Inquiry.h"
#define SIZE 10
using namespace std;

// Publisher Class 
class Publisher { 
  private:
    int publisherID;
    string pUsername;
    string pFirstName;
    string pLastName;
    string pPassword;
    string pEmail;
    string pAddress;
    string companyName;
    string pPhoneNo;
    string pDescription;
    Inquiry *inquiries[SIZE];
    int noOfInquiries;
  
  public: 
    Publisher(); 
    Publisher(int pID, string uName, string fName, string lName, string psw, string email, string address, string compName, string phone, string description); 
    bool login(string uName, string psw); 
    void displayPublisherDetails(); 
    bool editPublisherDetails(string newUserName, string newFirstName, string newLastName, string newEmail, string newAddress, string newCompName, string newPhone, string newDescription);
    bool deletePublisher();
    bool setNewPassword(string oldPassword, string newPassword);
    void withdrawMoney(double amount);
    void addInquiry(Inquiry *newInquiry);
    void displayInquiries();
    ~Publisher(); 
};
