//Olivia Clough
//CustomItem.h

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H


#include "IceCreamItem.h"
#include <string>
#include <vector>


class CustomItem : public IceCreamItem
{
 public:
  //functions
  virtual std::string composeItem(); // ok
  
  virtual double getPrice(); // ok
  
  CustomItem(std::string size); // ok
  
  virtual ~CustomItem(); // don't need
  
  void addTopping(std::string topping); //ok

  
 private:
  double price;
  std::vector <std::pair<std::string, int>> toppings; //to hold toppings as they are added
  std::string size;
    
};

#endif
