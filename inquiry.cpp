//IT21238512            W. M. Y. Soysa

#include <cstring>
#include <iostream>
using namespace std;
#include "Inquiry.h"

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
