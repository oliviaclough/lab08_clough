//Olivia Clough
//CustomItem.h

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H


#include "IceCreamItem.h"
//need to include the parent header file to be able to use the functions stated in there
//also include it in the .cpp 

#include <string>
#include <vector>


class CustomItem : public IceCreamItem
{
 public:
  //functions
  virtual std::string composeItem(); // creates an ice cream item of custom type
  
  virtual double getPrice(); // returns price of the item
  
  CustomItem(std::string size); // constructor - only given size as the customs don't have a name, but set beginning price within the constructor 
  
  virtual ~CustomItem(); // don't need ???
  
  void addTopping(std::string topping); //create a vector to hold the name of the toppings and how much are included in the item, use this function to add the toppings to the item

  
 private:
  double price;
  std::vector <std::pair<std::string, int>> toppings; //to hold toppings as they are added
  std::string size;
    
};

#endif
