//Olivia Clough
//CustomItem.cpp

#include "CustomItem.h"
#include "IceCreamItem.h"

#include <string>
using namespace std;


CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
  
    if (size == "small")
        {price = 3.00;}
    else if (size == "medium")
        {price = 5.00;}
    else if (size == "large")
        {price = 6.50;}
    
    this->size = size;

}

std::string CustomItem::composeItem() {
    //prints out the item in specific format given in assignment
    std::string x = "";
    std::string item = "";
    std::string pri = std::to_string(price);
    x = "Custom Size: " + this->size + "\n" + "Toppings:\n";
    for (unsigned int y=0; y<toppings.size(); y++) {
      item = toppings[y].first + ": " + std::to_string(toppings[y].second) + " oz\n";
      x = x + item;
    }
    x = x + "Price: $" + pri.substr(0,4)+ "\n";
    
    return x;
}

double CustomItem::getPrice () {
  return price;
}

CustomItem::~CustomItem() {
  //STUB -- not needed
}

void CustomItem::addTopping(std::string topping){
    price = price + 0.40;
    //for loop through vector

    bool found = false;
    for (unsigned int i=0; i<toppings.size(); i++) {
        //check if topping = vector.first for any spot
        //if it does, increase vector.second 
        if (topping == toppings[i].first) {
            toppings[i].second += 1;
            found = true;
        }
    }
        
    //else add it to end of vector and set int amt = 1   
    if (!found) {
        std::pair<std::string, int> tmp(topping, 1);
        toppings.push_back(tmp);
    }
}

