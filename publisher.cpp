//IT21238512            W. M. Y. Soysa

#include <cstring>
#include <iostream>
#include "Publisher.h"
using namespace std;

//Publisher Class function implementations
Publisher::Publisher() {
    publisherID = 0;
    pUsername = "";
    pFirstName = "";
    pLastName = "";
    pPassword = "";
    pEmail = "";
    pAddress = "";
    companyName = "";
    pPhoneNo = "";
    pDescription = "";
    noOfInquiries = 0;
}

Publisher::Publisher(int pID, string uName, string fName, string lName, string psw, string email, string address, string compName, string phone, string description){
  publisherID = pID;
  pUsername = uName;
  pFirstName = fName;
  pLastName = lName;
  pPassword = psw;
  pEmail = email;
  pAddress = address;
  companyName = compName;
  pPhoneNo = phone;
  pDescription = description;
  noOfInquiries = 0;
}

bool Publisher::login(string uName, string psw)  {return true;}

void Publisher::displayPublisherDetails() {}

bool Publisher::editPublisherDetails(string newUserName, string newFirstName, string newLastName, string newEmail, string newAddress, string newCompName, string newPhone, string newDescription) {}

bool Publisher::deletePublisher() {return true;}

bool Publisher::setNewPassword(string oldPassword, string newPassword) {return true;}

void Publisher::withdrawMoney(double amount) {}

void Publisher::addInquiry(Inquiry *newInquiry){
  inquiries[noOfInquiries++] = newInquiry;
}

void Publisher::displayInquiries() {}

Publisher::~Publisher(){
  cout << "Deleting Publisher " << publisherID << endl;
}
