/******************************************************************************
 * NAME:	    Thermistor.cpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the implementation of the Thermistor class.
 *
 * CREATED:	    07/26/2018
 *
 * LAST EDITED:	    07/26/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include <iostream>

#include "Devices/Thermistor.hpp"

using namespace std;

/******************************************************************************
 * CLASS METHODS
 ***/

void Thermistor::notify(void) {
  std::cout << "Thermistor is being notified." << std::endl;
}

void Thermistor::attach(void) {
  std::cout << "Thermistor is being attached." << std::endl;
}

void Thermistor::detach(void) {
  std::cout << "Thermistor is being detached." << std::endl;
}


/*****************************************************************************/
