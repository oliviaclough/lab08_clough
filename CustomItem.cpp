//Olivia Clough
//CustomItem.cpp

#include "CustomItem.h"
#include "IceCreamItem.h"

#include <string>
using namespace std;


CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
  
  //check the size of the input chosen
  //change price accordingly 
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
    std::string pri = std::to_string(price); //need to change double to a string
    x = "Custom Size: " + this->size + "\n" + "Toppings:\n";
    for (unsigned int y=0; y<toppings.size(); y++) {
      item = toppings[y].first + ": " + std::to_string(toppings[y].second) + " oz\n";
      x = x + item;
    }
    x = x + "Price: $" + pri.substr(0,4)+ "\n"; //need to cut off the remaining zeroes at the end of the decimal (only to 2 places as a dollar amt)
    
    return x;
}

double CustomItem::getPrice () {
  return price;
}

CustomItem::~CustomItem() {
  //STUB -- not needed
  
  //doesn't create anything on the heap so cannot delete items
  
  //delete size;
  //delete price;
  //delete toppings;
  //delelte this;
}

void CustomItem::addTopping(std::string topping){
    price = price + 0.40;
  
  
    //for loop through vector

    bool found = false;  //add a flag to easily keep track of the loop
    for (unsigned int i=0; i<toppings.size(); i++) {
        //check if topping = vector.first for any spot
        //if it does, increase vector.second 
        if (topping == toppings[i].first) {
            toppings[i].second += 1;
            found = true;
        }
    }
        
    //if it's not currently in the vector, add it to end of vector and set pair string = name and amt = 1   
    if (!found) {
        std::pair<std::string, int> tmp(topping, 1);
        toppings.push_back(tmp);
    }
}

