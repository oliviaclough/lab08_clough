//Olivia Clough
//PreMadeItem.cpp

#include "PreMadeItem.h"
#include "IceCreamItem.h"

using namespace std;
#include <string>

PreMadeItem::PreMadeItem (std::string name, std::string size) : IceCreamItem(size)  {
    if (size == "small")
        { price = 4.00; }
    else if (size == "medium")
        {price = 6.00; }
    else if (size == "large")
        {price = 7.50; }
    
    this->name = name; 
    this->size = size;
}

std::string PreMadeItem::composeItem() {
  std::string pre = "";
  std::string pri = std::to_string(price);
  //std::string si = size;
  
  pre = "Pre-made Size: " + size + "\n" + "Pre-made Item: " + this->name + "\n" + "Price: $" + pri.substr(0,4) +"\n";
  return pre;

}

double PreMadeItem::getPrice() {
  return price;
}

PreMadeItem::~PreMadeItem() {
  //STUB -- not needed
}
