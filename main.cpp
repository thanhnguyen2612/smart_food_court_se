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

#ifndef FOODMENU_H
#define FOODMENU_H
#include "FoodMenu.h"
#endif // FOODMENU_H

#include <iostream>
#include <string>

int main() {
    FoodMenu menu;

    FoodItem food1 = FoodItem("Pizza", 30);
    FoodItem food2 = FoodItem("Spaghetti", 15);
    FoodItem food3 = FoodItem("Soup", 5);
    FoodItem food4 = FoodItem("Chicken", 22);

    menu.addFood(food1);
    menu.addFood(food2);
    menu.addFood(food3);
    menu.addFood(food4);

    food1.showDetail();
    food2.showDetail();
    food3.showDetail();

    menu.showMenu();

    Order order1;
    order1.addFood(food2);
    order1.addFood(food3);
    order1.showDetail();

    Order order2;
    order2.addFood(food1);
    order2.addFood(food2);
    order2.addFood(food3);
    order2.showDetail();

    Payment *method1 = new MobileBanking();
    method1->setDiscount(15);
    order1.setPaymentMethod(method1);

    Payment *method2 = new PayCash();
    method2->setDiscount(23);
    order2.setPaymentMethod(method2);

    order1.pay();
    order2.pay();

    return 0;
}
