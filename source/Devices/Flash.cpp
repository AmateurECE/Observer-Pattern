/******************************************************************************
 * NAME:	    Flash.cpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the implementation of the Flash class.
 *
 * CREATED:	    07/26/2018
 *
 * LAST EDITED:	    07/26/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include <iostream>

#include "Devices/Flash.hpp"

using namespace std;

/******************************************************************************
 * CLASS METHODS
 ***/

void Flash::notify(void) {
  std::cout << "Flash is being notified." << std::endl;
}

void Flash::attach(void) {
  std::cout << "Flash is being attached." << std::endl;
}

void Flash::detach(void) {
  std::cout << "Flash is being detached." << std::endl;
}

/*****************************************************************************/
