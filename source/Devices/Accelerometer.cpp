/******************************************************************************
 * NAME:	    Accelerometer.cpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the implementation of the Accelerometer class.
 *
 * CREATED:	    07/26/2018
 *
 * LAST EDITED:	    07/26/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include <iostream>

#include "Devices/Accelerometer.hpp"

using namespace std;

/******************************************************************************
 * CLASS METHODS
 ***/

void Accelerometer::notify(void) {
  std::cout << "Accelerometer is being notified." << std::endl;
}

void Accelerometer::attach(void) {
  std::cout << "Accelerometer is being attached." << std::endl;
}

void Accelerometer::detach(void) {
  std::cout << "Accelerometer is being detached." << std::endl;
}

/*****************************************************************************/
