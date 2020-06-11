#ifndef FOODITEM_H
#define FOODITEM_H
#include "FoodItem.h"
#endif  // FOODITEM_H

#include <iostream>
#include <string>

#define MAX_SIZE 100

using namespace std;

class FoodMenu {
private:
    FoodItem *_foodList;
    int _numberOfFoods;
public:
    FoodMenu() {
        _foodList = new FoodItem[MAX_SIZE];
        _numberOfFoods = 0;
    }
    ~FoodMenu() {
        delete []_foodList;
        _numberOfFoods = 0;
    }

    void addFood(FoodItem food) {
        _foodList[_numberOfFoods++] = food;
    }

    void searchByName(string name) {
        for (int i = 0; i < _numberOfFoods; ++i) {
            if (name == _foodList[i].getName()) {
                _foodList[i].showDetail();
            }
        }
    }

    void showMenu() {
        cout << "------------------Menu-----------------\n";
        for (int i = 0; i < _numberOfFoods; ++i) {
            _foodList[i].showDetail();
        }
        cout << "---------------------------------------\n";
    }
};
