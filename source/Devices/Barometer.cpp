/******************************************************************************
 * NAME:	    Barometer.cpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the implementation of the Barometer class.
 *
 * CREATED:	    07/26/2018
 *
 * LAST EDITED:	    07/26/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include <iostream>

#include "Devices/Barometer.hpp"

using namespace std;

/******************************************************************************
 * CLASS METHODS
 ***/

void Barometer::notify(void) {
  std::cout << "Barometer is being notified." << std::endl;
}

void Barometer::attach(void) {
  std::cout << "Barometer is being attached." << std::endl;
}

void Barometer::detach(void) {
  std::cout << "Barometer is being detached." << std::endl;
}

/*****************************************************************************/
