#include <iostream>
#include <string>

using namespace std;

class FoodItem {
private:
    string _name;
    double _price;
    string _description;
    bool _status;

public:
    FoodItem() {
        _name = "Unknown";
        _price = 0;
        _description = "Unknown";
        _status = false;
    }
    FoodItem(string name, double price) : _name(name), _price(price), _description("A food"), _status(true) {}
    ~FoodItem() {}

    void setName(string name) {
        _name = name;
    }

    string getName() {
        return _name;
    }

    void setPrice(double price) {
        _price = price;
    }

    double getPrice() {
        return _price;
    }

    void setDescription(string description) {
        _description = description;
    }

    string getDescription() {
        return _description;
    }

    void setStatus(bool status) {
        _status = status;
    }

    bool isAvailable() {
        return _status;
    }

    void showDetail() {
        cout << getName() << " (" << getPrice() << "): " << getDescription() << "\n";
    }
};
