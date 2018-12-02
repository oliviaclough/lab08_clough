//Olivia Clough
//PreMadeItem.h

#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.h"
#include <string>

class PreMadeItem : public IceCreamItem
{
 public:
  //functions
  virtual std::string composeItem();

  virtual double getPrice();

  PreMadeItem(std::string name, std::string size);

  virtual ~PreMadeItem();
  
 private:
  //vars
  double price;
  std::string name;
  std::string size;
  
};

#endif
