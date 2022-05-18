//IT21238512      Soysa W. M. Y.

#include <cstring>
#include <iostream>
#define SIZE 10
using namespace std;

// Inquiry class
class Inquiry {
   protected:
    int inquiryID;
    string name;
    string email;
    string inquirySubject;
    string inquiryMsg;

   public:
    Inquiry();
    Inquiry(int id,string iName,string iEmail,string iSubject,string iMsg);
    void submitInquiry();
    void viewInquiry();
    void replyInquiry();
    void inquiryStatus();
    bool deleteInquiry();
    ~Inquiry();
};

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

//Inquiry Class function implementations
Inquiry::Inquiry() {
    inquiryID = 0;
    name = "";
    email = "";
    inquirySubject = "";
    inquiryMsg = "";
}

Inquiry::Inquiry(int id,string iName,string iEmail,string iSubject,string iMsg) {
    inquiryID = id;
    name = iName;
    email = iEmail;
    inquirySubject = iSubject;
    inquiryMsg = iMsg;
}

void Inquiry::submitInquiry() {}

void Inquiry::viewInquiry() {}

void Inquiry::replyInquiry() {}

void Inquiry::inquiryStatus() {}

bool Inquiry::deleteInquiry() {return true;}

Inquiry::~Inquiry() {
  cout << "Deleting Inquiry " << inquiryID << endl;
}

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
