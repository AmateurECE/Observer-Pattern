#pragma once
/******************************************************************************
 * NAME:	    Customer.hpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the class definitions for the Customer.
 *
 * CREATED:	    07/23/2018
 *
 * LAST EDITED:	    07/30/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/
 
#include <string>

#include "WaitingCustomer.hpp"

/******************************************************************************
 * CLASS DEFINITIONS
 ***/

class Customer : public WaitingCustomer {
public:
  Customer(const std::string & drinkOrdered, const std::string & name)
    : drinkOrdered(drinkOrdered), name(name) {};
  ~Customer() = default;
  bool orderReady(std::string preparedDrink);

  std::string getName() const { return this->name; }
  std::string getDrinkOrdered() const { return this->drinkOrdered; }
private:
  const std::string & drinkOrdered;
  const std::string & name;
};

/*****************************************************************************/
