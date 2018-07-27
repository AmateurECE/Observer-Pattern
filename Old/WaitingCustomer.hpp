#pragma once
/******************************************************************************
 * NAME:	    WaitingCustomer.hpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the interface 'WaitingCustomer'.
 *
 * CREATED:	    07/23/2018
 *
 * LAST EDITED:	    07/23/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include <string>

/******************************************************************************
 * CLASS DEFINITIONS
 ***/

class WaitingCustomer {
public:
  virtual bool orderReady(std::string preparedDrink) = 0;
};

/*****************************************************************************/
