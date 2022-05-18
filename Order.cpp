//it21239670 bandara D.M.H.G.I.G
#include<iostrem>
#include"Order.h"
using name spase std;

Order::Order()
{
    
}
 Order::Order(double num1, double num2)
 {
     pymnt[0] = new Payment[1500];
     pymnt[1] = new Payment[750];
 }
void Order::statusOder()
{
}
void Order::calculateBookPrice()
{
}
void Order::displayOderDetails()
{
}
int Order::getOrderID()
{
    return orderID;
}
Order::~Order()
{
    cout << "Delete order details " << endl;
    {
        delete pymnt[0];
        delete pymnt[1];
    }
}
