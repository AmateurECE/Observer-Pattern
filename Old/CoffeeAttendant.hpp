#pragma once
/******************************************************************************
 * NAME:	    CoffeeAttendant.hpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the class definition for the Coffee Attendant.
 *
 * CREATED:	    07/23/2018
 *
 * LAST EDITED:	    07/23/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include "WaitingCustomer.hpp"
#include <string>
#include <vector>

/******************************************************************************
 * CLASS DEFINITIONS
 ***/

class CoffeeAttendant {
public:
  void takeOrder(WaitingCustomer & customer);
  void prepareDrink(std::string drinkToPrepare);
  void callOutCompletedOrder();
private:
  std::vector<WaitingCustomer*> customerList;
  std::string completedDrink;
};

/*****************************************************************************/
