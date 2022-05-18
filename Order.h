//it21239670 bandara D.M.H.G.I.G
#include<iostrem>
#include"payment.h"
class Order
{
private:

    int orderID;
    int orderQty;
    double price;
    

    Payment* pymnt[2];

public:

    Order();
    Order(double num1, double num2);
    void statusOder();
    void calculateBookPrice();
    int getOrderID();
    void displayOderDetails();
    ~Order();
};

