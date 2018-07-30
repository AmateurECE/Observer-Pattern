/******************************************************************************
 * NAME:	    Customer.cpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Implementation of the Customer class.
 *
 * CREATED:	    07/30/2018
 *
 * LAST EDITED:	    07/30/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include <iostream>

#include "Customer.hpp"

/******************************************************************************
 * CLASS METHODS
 ***/

bool Customer::orderReady(std::string drinkPrepared)
{
  std::cout << this->name << " says: \"Thanks for the " << drinkPrepared
	    << "!\"" << std::endl;
  return (drinkPrepared == this->drinkOrdered);
}

/*****************************************************************************/
