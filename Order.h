#ifndef FOODITEM_H
#define FOODITEM_H
#include "FoodItem.h"
#endif  // FOODITEM_H

#ifndef PAYMENT_H
#define PAYMENT_H
#include "Payment.h"
#endif  // PAYMENT_H

#include <iostream>
#include <string>

#define MAX_SIZE 100

using namespace std;

class Order {
private:
    FoodItem *_foodCart;
    int _numberOfFoods;
    bool _paid;
    Payment *_paymentMethod;
public:
    Order() {
        _foodCart = new FoodItem[MAX_SIZE];
        _numberOfFoods = 0;
        _paid = false;
        _paymentMethod = nullptr;
    }
    ~Order() {
        delete []_foodCart;
        _numberOfFoods = 0;
        delete _paymentMethod;
    }

    void addFood(FoodItem food) {
        _foodCart[_numberOfFoods] = food;
        _numberOfFoods++;
    }

    double getTotalPrice() {
        double totalPrice = 0;
        for (int i = 0; i < _numberOfFoods; ++i) {
            totalPrice += _foodCart[i].getPrice();
        }
        return totalPrice;
    }

    void showDetail() {
        cout << "Ordered food: \n";
        for (int i = 0; i < _numberOfFoods; ++i) {
            _foodCart[i].showDetail();
        }
    }

    void setPaymentMethod(Payment *paymentMethod) {
        delete this->_paymentMethod;
        this->_paymentMethod = paymentMethod;
    }

    void pay() {
        _paymentMethod->pay(getTotalPrice());
        _paid = true;
    }
};
