#ifndef FOODITEM_H
#define FOODITEM_H
#include "FoodItem.h"
#endif // FOODITEM_H

#ifndef ORDER_H
#define ORDER_H
#include "Order.h"
#endif // ORDER_H

#ifndef PAYMENT_H
#define PAYMENT_H
#include "Payment.h"
#endif // PAYMENT_H

#include <iostream>
#include <string>

int main() {
    FoodItem food1 = FoodItem("Pizza", 30);
    FoodItem food2 = FoodItem("Spaghetti", 15);
    FoodItem food3 = FoodItem("Soup", 5);

    food1.showDetail();
    food2.showDetail();
    food3.showDetail();

    Order order1;
    order1.addFood(food2);
    order1.addFood(food3);
    order1.showDetail();

    order1.setPaymentMethod(new MobileBanking());
    order1.pay();

    return 0;
}
