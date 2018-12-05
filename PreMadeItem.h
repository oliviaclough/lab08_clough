//Olivia Clough
//PreMadeItem.h

#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.h"
//again include the parent header file 

#include <string>

class PreMadeItem : public IceCreamItem
{
 public:
  //functions
  virtual std::string composeItem(); //how to print out the item

  virtual double getPrice(); //returns the price

  PreMadeItem(std::string name, std::string size); //constructor - given name and size but also need to set price within this

  virtual ~PreMadeItem(); //don't need ???
  
 private:
  //vars
  double price;
  std::string name;
  std::string size;
  
};

#endif
