//it21239670 bandara D.M.H.I.G
#include<iostrem>
#include"Payment.h"

Payment::Payment()
{
    payID = 0;
    strcpy(payType, "");
    payAmount = 0;
}
Payment::Payment(int pID, const char ppayType[], double ppayAmount)
{
    payID = pID;
    strcpy(payType, ppayType);
    payAmount = ppayAmount;
}
// payment implementation
void Payment::checkPayment()
{
}
void Payment::confirmPayment()
{
}
void Payment::displayPaymentDetails()
{
}
Payment::~Payment()

{
}
