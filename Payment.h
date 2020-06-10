#include <iostream>
#include <string>

using namespace std;

class Payment {
    double _discount;
public:
    Payment(double discountPercent = 0) {
        cout << "Payment method created\n";
        _discount = discountPercent;
    }
    virtual ~Payment() {};

    void setDiscount(double discount) {
        _discount = discount;
    }
    double getDiscount() {
        return _discount;
    }

    virtual void pay(double price) = 0;
};

class MobileBanking: public Payment {
public:

    void pay(double price) {
        double discount = getDiscount();
        double priceToPay = price;
        if (discount > 0) {
            priceToPay = priceToPay * (1 - discount / 100);
        }
        cout << "Pay " << priceToPay << "via mobile banking\n";
    }
};

class PayCash: public Payment {
public:
    void pay(double price) {
        double discount = getDiscount();
        double priceToPay = price;
        if (discount > 0) {
            priceToPay = priceToPay * (1 - discount / 100);
        }
        cout << "Pay " << priceToPay << "in cash\n";
    }
};
