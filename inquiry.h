//IT21238512          W. M. Y. Soysa

#include <cstring>
#include <iostream>
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
